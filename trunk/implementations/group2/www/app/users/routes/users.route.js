'use strict';
//Setting up route
angular.module('coffee.core').config(['$stateProvider',
    function($stateProvider) {

        var checkLoggedOut = function($q, $timeout, $http, $location, Global) {
            var deferred = $q.defer();
            $http.get('/coffee/sessions').success(function(user) {
                // Authenticated
                if (user) {
                    Global.user = user;
                    $timeout(deferred.reject);
                    $location.url('/');
                } else { // Not Authenticated
                    $timeout(deferred.resolve);
                }
            }).error(function() {
                $timeout(deferred.resolve);
            });

            return deferred.promise;
        };

        var checkLoggedin = function($q, $timeout, $http, $location, Global) {
          // Initialize a new promise
          var deferred = $q.defer();

          // Make an AJAX call to check if the user is logged in
          $http.get('/coffee/sessions').success(function(user) {
            // Authenticated
            if (user) {
                Global.user = user;
                $timeout(deferred.resolve);
            }
            // Not Authenticated
            else {
              $timeout(deferred.reject);
              $location.url('/login');
            }
          }).error(function() {
              $timeout(deferred.reject);
              $location.url('/login');
          });;

          return deferred.promise;
        };

        // states for my app
        $stateProvider.
        state('login', {
            url: '/login',
            templateUrl: '/app/users/views/login.html',
            resolve: {
                loggedout: checkLoggedOut
            }
        }).state('register', {
            url: '/register',
            templateUrl: '/app/users/views/register.html',
            resolve: {
                loggedout: checkLoggedOut
            }
        }).state('editUser', {
            url: '/edit',
            templateUrl: '/app/users/views/edit.html',
            resolve: {
                loggedout: checkLoggedin
            }
        });
    }
]);