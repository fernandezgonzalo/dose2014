/**
 * Created by ludste on 05/12/14.
 */
'use strict';

angular.module('DOSEMS.controllers')
    .controller('EditUserCtrl', ['$rootScope', '$scope', '$log', 'Users', '$cookieStore', '$window', function ($rootScope, $scope, $log, Users, $cookieStore, $window) {
        $scope.init = function () {
            Users.resource.get({userId: $cookieStore.get('userId')}, function (user) {
                    $scope.updateUser = user;
                    $scope.userId = user.id;
                    $scope.password = user.password;
                    $scope.newPassword = '';
                    $scope.newPasswordRepeat = '';
                }
            );
        };


        $scope.save = function () {
            if ($scope.newPassword.length > 0 || $scope.newPasswordRepeat > 0) {
                //Change password, check that the new ones match
                if (!angular.equals($scope.newPassword, $scope.newPasswordRepeat) ||
                    $scope.newPassword.length < 2 ||
                    $scope.newPassword.length > 20
                ) {
                    $scope.passwordError = true;
                    return;
                } else {
                    $scope.updateUser.password = $scope.newPassword;
                }
            }
            $scope.passwordError = false;
            $scope.changesSaved = true;
            $log.debug($scope.updateUser);
            Users.resource.update({userId: $scope.userId}, $scope.updateUser, function (data) {
                $log.debug(data);
            });
        };

        $scope.showDeleteDialog = function () {
            $('#deleteModal').modal('toggle');
        };
        $scope.deleteUser = function () {
            Users.resource.delete({userId: $scope.userId}, function (data) {
                Users.restUser();
                $cookieStore.put('loggedIn', false);
                $cookieStore.put('userId', -1);
                $rootScope.$broadcast('loggedOut');
                $window.location.href = '/#/login';

            });
        };


        /*    function validatePassword() {
         $log.debug($scope.oldPass);
         $log.debug($scope.oldPassInput);
         return angular.equals($scope.oldPass, $scope.oldPassInput);
         }*/

        $scope.init();
    }
    ])
;

