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
      .when('/user', {
        templateUrl: 'partials/user_list.html',
        controller: 'UserController'
      })
      .when('/login', {
        templateUrl: 'partials/login.html',
        controller: 'LoginController'
      })
      .otherwise({
        redirectTo: '/user'
      });
    }
  ]);