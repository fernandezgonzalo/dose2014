'use strict';
//Setting up route
angular.module('coffee.core').config(['$stateProvider', '$urlRouterProvider',
    function($stateProvider, $urlRouterProvider) {


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

        $urlRouterProvider.otherwise('/');

        $stateProvider.
        state('homeRequirements', {
            url: '/',
            templateUrl: '/app/core/views/requirements/index.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('listRequirements', {
            url: '/requirements',
            templateUrl: '/app/core/views/requirements/index.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('createRequirement', {
            url: '/project/:projectId/requirements/create',
            templateUrl: '/app/core/views/requirements/create.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('viewRequirement', {
            url: '/requirements/:requirementId',
            templateUrl: '/app/core/views/requirements/view.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('editRequirement', {
            url: '/requirements/:requirementId/edit',
            templateUrl: '/app/core/views/requirements/edit.html',
            resolve: {
                loggedin: checkLoggedin
            }
        });

    }
]);