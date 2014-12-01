'use strict';

angular.module('DOSEMS.controllers', ['ngCookies'])
    .controller('SessionCtrl', ['$rootScope', '$scope', '$http', '$log', '$timeout', '$window',
        function ($rootScope, $scope, $http, $log, $timeout, $window) {
            $scope.init = function () {
                $rootScope.LOGGED_IN = false;
                // the model that we bind to the input box
                $scope.formData = {
                    email: '',
                    pass: ''
                };
                $rootScope.currentUserId = -1;
                $scope.successMsgVisible = false;
                $scope.errorMsgVisible = false;
            };

            $scope.$on("signup_done", function (event, args) {

                $log.debug("here");
            });

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
                        // When we get a response object back it will be set here
                        //	if (angualar.equals(data.status, 'ok') {
                        //		$scope.session_id = data.sessionID
                        //	}
                        //   show a success message
                        $scope.successMsgVisible = true;
                        //    let the message disappear after 2 secs
                        $rootScope.currentUserId = data.id;
                        $rootScope.LOGGED_IN = true;
                        $timeout(function () {
                            $scope.successMsgVisible = false;
                            // Insert the userID instead of 5 later
                            $window.location.href = '/#/user/' + $rootScope.currentUserId + '/home';
                        }, 2000);
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
                        $rootScope.LOGGED_IN = false;

                        // show a success message
                        $scope.successMsgVisible = true;
                        // let the message dissapear after 2 secs
                        $timeout(function () {
                            $scope.successMsgVisible = false;
                            $window.location.href = '/#/login';
                        }, 2000);
                    })
                    .error(function (data, status) {
                        $log.debug('Error while logging out the user.');
                    });
            };

            $scope.init();

        }]);
