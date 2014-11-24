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


        $stateProvider.

        state('listSprints', {
            url: '/projects/:projectId/sprints',
            templateUrl: '/app/core/views/sprints/index.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('createSprint', {
            url: '/projects/:projectId/sprints/create',
            templateUrl: '/app/core/views/sprints/create.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('viewSprint', {
            url: '/sprints/:sprintId',
            templateUrl: '/app/core/views/sprints/view.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('editSprint', {
            url: '/sprints/:sprintId/edit',
            templateUrl: '/app/core/views/sprints/edit.html',
            resolve: {
                loggedin: checkLoggedin
            }
        });

    }
]);