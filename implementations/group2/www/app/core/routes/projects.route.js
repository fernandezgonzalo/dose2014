'use strict';
//Setting up route
angular.module('coffee.core').config(['$stateProvider', '$urlRouterProvider',
    function($stateProvider, $urlRouterProvider) {


        var checkLoggedin = function($q, $timeout, $http, $location) {
          // Initialize a new promise
          var deferred = $q.defer();

          // Make an AJAX call to check if the user is logged in
          //$http.get('http://localhost:3000/loggedin').success(function(user) {
          $http.get('/session/loggedin').success(function(user) {
            // Authenticated
            if (user !== '0') $timeout(deferred.resolve);

            // Not Authenticated
            else {
              $timeout(deferred.reject);
              $location.url('/login');
            }
          });

          return deferred.promise;
        };

        $urlRouterProvider.otherwise('/');

        $stateProvider.
        state('home', {
            url: '/',
            templateUrl: '/app/core/views/projects/index.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('listProjects', {
            url: '/projects',
            templateUrl: '/app/core/views/projects/index.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('createProject', {
            url: '/projects/create',
            templateUrl: '/app/core/views/projects/create.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('viewProject', {
            url: '/projects/:projectId',
            templateUrl: '/app/core/views/projects/view.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('editProject', {
            url: '/projects/:projectId/edit',
            templateUrl: '/app/core/views/projects/edit.html',
            resolve: {
                loggedin: checkLoggedin
            }
        });

    }
]);