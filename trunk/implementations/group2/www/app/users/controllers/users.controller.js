'use strict';
angular.module('coffee.users').controller('LoginCtrl', ['$scope', '$rootScope', '$http', '$location', 'Global',
    function($scope, $rootScope, $http, $location, Global) {
        $scope.user = {};
        // Register the login() function
        $scope.login = function() {
            $http.post('/coffee/sessions', $scope.user).success(function(response) {
                $scope.loginError = null;
                Global.user = response.user;
                $location.url('/');
            }).error(function(response) {
                $scope.loginerror = response.Message;
            });
        };
    }
]).controller('RegisterCtrl', ['$scope', '$rootScope', '$http', '$location', 'Users', 'Global',
    function($scope, $rootScope, $http, $location, Users, Global) {
        $scope.user = {};
        $scope.register = function() {
            Users.post($scope.user).then(function(user) {
                $location.url('/');
            }, function(err) {
                $scope.error = response.Message;
            });
        };
    }
]);