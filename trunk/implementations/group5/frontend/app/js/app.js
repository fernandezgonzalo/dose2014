'use strict';

var app = angular.module('Demo', [
  'ngRoute'
]);

/** Turn on/off the angular debugging; should be off when deployed */
app.config(['$logProvider', function($logProvider){
  $logProvider.debugEnabled(false);
}]);

/** Define the routes for the application; This routing is done by Angular */
app.config(['$routeProvider', '$locationProvider',
  function($routeProvider, $locationProvider) {
    $routeProvider
      .when('/todos', {
        templateUrl: 'partials/todos.html',
        controller: 'TodosCtrl'
      })
      .when('/users/new', {
        templateUrl: 'partials/usersNew.html',
        controller: 'UsersCtrl'
      })
      .otherwise({
        redirectTo: '/todos'
      });
    }
  ]);
