'use strict';

var app = angular.module('LetsGoTeam', [
  'ngRoute'
]);

/** Turn on/off the angular debugging; should be off when deployed */
app.config(['$logProvider', function($logProvider){
  $logProvider.debugEnabled(false);
}]);

app.factory('myService', function() {
  var savedProject = {};

  var savedSprint = {};

  function set(pjt,spr) {
    savedProject = pjt;
    savedSprint = spr;
  }
  function getSavedSprint() {
    return savedSprint;
  }

  function getSavedProject() {
    return savedProject;
  }

  return {
    set: set,
    getSavedProject: getSavedProject,
    getSavedSprint: getSavedSprint
  }
}),

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
      .when('/projectsSprints', {
        templateUrl: 'partials/projects-sprints.html',
        controller: 'projectsSprintsController'
      })
      .when('/storyTask', {
          templateUrl: 'partials/story-task.html',
          controller: 'storyTaskController'
      })
      .otherwise({
        redirectTo: '/home'
      });
    }
  ]);
