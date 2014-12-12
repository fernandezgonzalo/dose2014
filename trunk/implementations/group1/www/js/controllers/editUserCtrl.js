/**
 * Created by ludste on 05/12/14.
 */
'use strict';

angular.module('DOSEMS.controllers')
    .controller('EditUserCtrl', ['$rootScope', '$scope', '$log', 'Users', '$cookieStore', '$window', function ($rootScope, $scope, $log, Users, $cookieStore, $window) {
        $scope.init = function () {
            $scope.oldPasswordError = false;
            $scope.oldPass = '';
            $scope.oldPassInput = '';
            Users.resource.get({userId: $cookieStore.get('userId')}, function (user) {
                    $scope.updateUser = user;
                    $scope.oldPass = user.password;
                    $scope.userId = user.id;
                    $scope.password = '';
                    $scope.passwordRepeat = '';
                    $log.debug($scope.oldPass);
                }
            );
        };


        $scope.save = function () {
            if (validatePassword()) {
                if ($scope.password.length > 0 || $scope.passwordRepeat > 0) {
                    //Change password, check that the new ones match
                    if (!angular.equals($scope.password, $scope.passwordRepeat) ||
                        $scope.password.length < 2 ||
                        $scope.password.length > 20
                    ) {
                        $scope.passwordError = true;
                        return;
                    } else {
                        $scope.updateUser.password = $scope.password;
                    }
                }
                $scope.passwordError = false;
                $scope.oldPasswordError = false;
                $scope.changesSaved = true;
                $log.debug($scope.updateUser);
                Users.resource.update({userId: $scope.userId}, $scope.updateUser, function (data) {
                    $log.debug(data);
                });
            } else {
                $scope.oldPasswordError = true;
            }

        };

        $scope.showDeleteDialog = function () {
            if (validatePassword()) {
                $('#deleteModal').modal('toggle');
            } else {
                $scope.oldPasswordError = true;

            }
        };
        $scope.deleteUser = function () {
            if (validatePassword()) {
                Users.resource.delete({userId: $scope.userId}, function (data) {
                    Users.restUser();
                    $cookieStore.put('loggedIn', false);
                    $cookieStore.put('userId', -1);
                    $rootScope.$broadcast('loggedOut');
                    $window.location.href = '/#/login';

                });
            } else {
                $scope.oldPasswordError = true;
            }
        };


        function validatePassword() {
            $log.debug($scope.oldPass);
            $log.debug($scope.oldPassInput);
            return angular.equals($scope.oldPass, $scope.oldPassInput);
        }

        $scope.init();
    }
    ])
;

