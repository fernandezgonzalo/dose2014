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
        controller: 'LoginController'
      })
      .when('/register', {
        templateUrl: 'partials/register.html',
        controller: 'registerController'
      })
        .when('/sprint', {
          templateUrl: 'partials/sprint.html',
          controller: 'SprintController'
        })
        .when('/task', {
          templateUrl: 'partials/task.html',
          controller: 'TaskController'
        })
        .when('/story', {
          templateUrl: 'partials/story.html',
          controller: 'StoryController'
        })

      .otherwise({
        redirectTo: '/login'
      });
    }
  ]);
