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

        state('listTasks', {
            url: '/requirements/:requirementId/tasks',
            templateUrl: '/app/core/views/tasks/index.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('createTask', {
            url: '/requirements/:requirementId/tasks/create',
            templateUrl: '/app/core/views/tasks/create.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('viewTask', {
            url: '/tasks/:taskId',
            templateUrl: '/app/core/views/tasks/view.html',
            resolve: {
                loggedin: checkLoggedin
            }
        }).
        state('editTask', {
            url: '/tasks/:taskId/edit',
            templateUrl: '/app/core/views/tasks/edit.html',
            resolve: {
                loggedin: checkLoggedin
            }
        });

    }
]);