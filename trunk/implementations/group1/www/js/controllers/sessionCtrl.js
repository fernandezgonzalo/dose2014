'use strict';

angular.module('DOSEMS.controllers', ['ngCookies'])
    .controller('SessionCtrl', ['$rootScope', '$scope', '$http', '$log', '$timeout', '$window', 'Users',
        function ($rootScope, $scope, $http, $log, $timeout, $window, Users) {
            $scope.init = function () {
                // the model that we bind to the input box
                $scope.formData = {
                    email: '',
                    pass: ''
                };
                $scope.successMsgVisible = false;
                $scope.errorMsgVisible = false;
            };
            // the function to login
            $scope.login = function (email, pass) {
                // the payload is simple the json object that we used for binding to the input
                var payload = {
                    email: email,
                    password: pass
                };

                $http.post('/api/login', payload)
                    .success(function (data, status, header, config) {
                        $log.debug('Success logging in the user');
                        $scope.successMsgVisible = true;
                        Users.loggedIn = true;
                        Users.resource.get({userId: data.id}).$promise.then(function (data) {
                            $log.debug("Getting logged in user");
                            Users.currentUser = data[0];
                            $rootScope.$broadcast('loggedIn');
                        });
                        $timeout(function () {
                            $scope.successMsgVisible = false;
                            $window.location.href = '/#/user/' + Users.currentUser.id + '/home';
                        }, 500);
                    })
                    .error(function (data, status) {
                        $log.info('Error while trying to login user.');
                        // show a success message
                        $scope.errorMsgVisible = true;
                        //    let the message dissapear after 2 secs
                        $timeout(function () {
                            $scope.errorMsgVisible = false;
                        }, 2000);

                    });
            };


            // the function to logout
            $scope.logout = function () {

                $http.get('/api/logout')
                    .success(function (data, status, header, config) {

                        $log.debug('Success logging out the user');
                        Users.restUser();
                        $scope.successMsgVisible = true;
                        $rootScope.$broadcast('loggedOut');
                        // let the message dissapear after 2 secs
                        $timeout(function () {
                            $scope.successMsgVisible = false;
                            $window.location.href = '/#/login';
                        }, 500);
                    })
                    .error(function (data, status) {
                        $log.debug('Error while logging out the user.');
                    });
            };

            $scope.init();

        }]);
