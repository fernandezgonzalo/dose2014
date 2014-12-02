/**
 * Created by ludste on 01/12/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('SignupCtrl', ['$rootScope', '$scope', '$log', 'Users', '$window', function ($rootScope, $scope, $log, Users, $window) {
        $scope.init = function () {
            // the model that we bind to the input boxes
            $scope.signupData = {
                name: '',
                lastName: '',
                email: '',
                pass: '',
                passwordRepeat: '',
                $passwordError: false
            };
        };
        $scope.signup = function () {
            if (!angular.equals($scope.signupData.pass, $scope.signupData.passwordRepeat)) {
                $scope.signupData.$passwordError = true;
                return;
            }
            var newUser = new Users.resource();
            newUser.name = $scope.signupData.name;
            newUser.lastName = $scope.signupData.lastName;
            newUser.email = $scope.signupData.email;
            newUser.pass = $scope.signupData.pass;


            newUser.$save().then(function (response) {
                $log.debug(response);
                /*
                 $rootScope.currentUserId = response.id;
                 */
                Users.loggedInUserId = 5;
                Users.loggedIn = true;
                $window.location.href = '/#/user/' + Users.loggedInUserId + '/home';

            });
        };

        $scope.init();
    }]);
