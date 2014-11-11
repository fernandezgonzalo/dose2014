'use strict';

var app = angular.module('Mgmt', [
  'ngRoute'
]);

/** Turn on/off the angular debugging; should be off when deployed */
app.config(['$logProvider', function($logProvider){
  $logProvider.debugEnabled(true);
}]);

/** Define the routes for the application; This routing is done by Angular */
app.config(['$routeProvider',
  function($routeProvider) {
    $routeProvider
      .when('/login', {
        templateUrl: 'partials/login.html',
        controller: 'LoginController'
      })
      .when('/users', {
        templateUrl: 'partials/user_list.html',
        controller: 'UserController'
      })
      .when('/users/new', {
        templateUrl: 'partials/user.html',
        controller: 'UserController'
      })
      .when('/register', {
        templateUrl: 'partials/user.html',
        controller: 'UserController'
      })
      .when('/users/:id', {
        templateUrl: 'partials/user.html',
        controller: 'UserController'
      })
      .when('/password_recovery', {
        templateUrl: 'partials/password_recovery.html',
        controller: 'PasswordRecoveryController'
      })
      .when('/projects', {
        templateUrl: 'partials/projects.html',
        controller: 'ProjectsController',
        controllerAs: 'projects'
      })
      .when('/projects/new', {
        templateUrl: 'partials/projects_new.html',
        controller: 'ProjectsController',
        controllerAs: 'projects'
      })
      .when('/projects/:id/edit', {
        templateUrl: 'partials/projects_edit.html',
        controller: 'ProjectsController',
        controllerAs: 'projects'
      })
      .when('/projects/:id/dashboard', {
        templateUrl: 'partials/projects_dashboard.html',
        controller: 'ProjectsController',
        controllerAs: 'projects'
      })
      .when('/usr/:id/dashboard', {
        templateUrl: 'partials/user_dashboard.html',
        controller: 'UserController',
      })
      .otherwise({
        redirectTo: '/users'
      });
    }
  ]);
