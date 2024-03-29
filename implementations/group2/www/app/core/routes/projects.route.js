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
        state('dashboardProject', {
            url: '/projects/:projectId/dashboard',
            templateUrl: '/app/core/views/projects/dashboard.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('recentActivities', {
            url: '/projects/:projectId/recent_activities',
            templateUrl: '/app/core/views/projects/recent_activities.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('usersRanking', {
            url: '/projects/:projectId/users/ranking',
            templateUrl: '/app/core/views/projects/ranking.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('usersProject', {
            url: '/projects/:projectId/users',
            templateUrl: '/app/core/views/projects/users.html',
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