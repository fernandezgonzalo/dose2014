'use strict';

angular.module('LetsGoTeam')
    .controller('LoginController', ['$scope', '$http', '$log', '$location', '$timeout',
        function($scope, $http, $log, $location, $timeout) {

            $scope.view = 1;

            $scope.data = {};

            $scope.changeView = function(n) {
                $scope.view = n;
            };
            $scope.isView = function(n) {
                return $scope.view === n;
            };

            // the model that we bind to the input box
            $scope.user = {
                email: '',
                password: ''

            };

            $scope.successMsgVisible = false;

            // the function to login with users information
            $scope.login = function(user) {

                $scope.user = user;

                // the payload is simple the json object that we used for binding to the input
                var payload = $scope.user;

                $http.post('/login', payload)
                    .success(function(data, status, header, config) {
                        if (status === 200) {
                            console.log('Success logging user');
			    currentUser = user;
                            $location.path("/projectsSprints");
                        } else {
		            if (!logged)
                                $scope.changeView(4);
                            console.log('Incorrect data');
                        };
                    })
                    .error(function(data, status) {
		        if (!logged)
			    $scope.changeView(4);
                        console.log('Error while trying to login');
		    })
            };

            $scope.forgotPassword = function(user) {

                var payload = user;

                $http.post('/login/forgot-password', payload)
                    .success(function(data, status, header, config) {
			$scope.changeView(2);

                        // reset the todoModel to not have a description (we keep the last selected user)
                        $scope.user.email = '';
                        $scope.user.password = '';

                    })
                    .error(function(data, status) {
                        $log.debug('Error while trying to get a password');
                    });
            }

        }
    ]);
