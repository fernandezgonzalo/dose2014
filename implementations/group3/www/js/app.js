'use strict';

var app = angular.module('LetsGoTeam', [
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
      .when('/home', {
        templateUrl: 'partials/home.html',
        controller: 'homeController'
      })
      .when('/login', {
        templateUrl: 'partials/login.html',
        controller: 'loginController'
      })
      .when('/register', {
        templateUrl: 'partials/register.html',
        controller: 'registerController'
      })
      .otherwise({
        redirectTo: '/register'
      });
    }
  ]);
