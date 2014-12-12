'use strict';

angular.module('DOSEMS.controllers', ['ngCookies'])
    .controller('LoginCtrl', ['$rootScope', '$scope', '$http', '$log', '$timeout', '$window', 'Users', '$cookieStore',
        function ($rootScope, $scope, $http, $log, $timeout, $window, Users, $cookieStore) {
            $scope.init = function () {
                // the model that we bind to the input box
                $scope.formData = {
                    email: '',
                    pass: ''
                };
                $scope.successMsgVisible = false;
                $scope.errorMsgVisible = false;

                /*                if ($cookieStore.get('loggedIn') == true) {
                 Users.resource.get({userId: $cookieStore.get('userId')}).$promise.then(function (data) {
                 $log.debug(data);
                 var user = data;
                 $scope.login(user.email, user.password)
                 });
                 }*/
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
                        $timeout(function () {
                            $cookieStore.put('loggedIn', true);
                            $cookieStore.put('userId', data.id);
                            $rootScope.$broadcast('loggedIn');
                            $scope.successMsgVisible = false;
                            $window.location.href = '/#/user/' + data.id + '/home';
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
            $scope.init();

        }]);
