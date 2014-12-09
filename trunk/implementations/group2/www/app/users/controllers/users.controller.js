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
        $scope.initEdit = function() {
            $scope.user = Global.user;
        };
        $scope.edit = function() {
            var u = {}
            if (this.user.new_password == this.user.new_password_repeated) {
                var id = this.user.id;
                var self = this;
                var u = {};
                u.email = self.user.email;
                u.first_name = self.user.first_name;
                u.last_name = self.user.last_name;
                u.password = self.user.new_password;
                Users
                .one(id)
                .customPUT(u).then(function(res) {
                   $location.url('/');
                });

            } else {
                $scope.error = "Error, different passwords"
            }

        };
        $scope.user = {};
        $scope.register = function() {
            Users.post($scope.user).then(function(user) {
                $location.url('/');
            }, function(err) {
                $scope.error = err.Message;
            });
        };

        $scope.removeUser = function() {
            console.log("remove");
            var id = Global.user.id;
            Users
            .one(id)
            .remove().then(function(res) {
                $http.delete('/coffee/sessions').success(function(response) {
                    $scope.global.user = null;
                    $location.url('/');
                });
            });
        };
    }
]);