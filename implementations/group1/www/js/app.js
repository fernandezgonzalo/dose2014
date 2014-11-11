'use strict';

var app = angular.module('Demo', [
  'ngRoute', 'ngResource'
]);

/** Turn on/off the angular debugging; should be off when deployed */
app.config(['$logProvider', function($logProvider){
  $logProvider.debugEnabled(false);
}]);

/** Define the routes for the application; This routing is done by Angular */
app.config(['$routeProvider', '$locationProvider',
  function($routeProvider, $locationProvider) {
    $routeProvider
      .when('/login', { 
        templateUrl: 'partials/login.html',
        controller: 'SessionCtrl'
      })
      .when('/user/:userID/logout', {
        templateUrl: 'partials/logout.html',
        controller: 'SessionCtrl'
      })
	  .when('/user/:userId/home', {
        templateUrl: 'partials/home.html',
        controller: 'ProjectCtrl'
      })
	  	  .when('/user/:userId/home/:projectId', {
        templateUrl: 'partials/home.html',
        controller: 'ProjectCtrl'
	})
	  .when('/user/:userId//cpanel', {
        templateUrl: 'partials/cpanel.html',
        controller: 'UserCtrl'
      })
	  .when('/ranking', {
        templateUrl: 'partials/ranking.html',
        controller: 'UserCtrl'
	})
	  .when('/user', {
        templateUrl: 'partials/user.html',
        controller: 'UserCtrl'
	})
	  .when('/user/:userId', {
        templateUrl: 'partials/user.html',
        controller: 'UserCtrl'
	})
	  .when('/signup', {
        templateUrl: 'partials/user.html',
        controller: 'UserCtrl'
	})
      .otherwise({
        redirectTo: '/login'
      });
    }
	
  ]);
 
  
  
  
  
  
  
  
  
  
  