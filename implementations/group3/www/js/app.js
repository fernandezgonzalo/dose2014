'use strict';

var app = angular.module('LetsGoTeam', [
  'ngRoute', 'facebook','googleplus'
]);

var users = [{id:1 ,firstName:'Juanito',LastName:'Perez',email:'jPe@gmail.com',password:'perez'}];
var usersProjects = [{idProject:1,idUser:1}];
var projects = [{id:1 ,name:'P1' }];
var sprints;
var stories;
var tasks;

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
});

/** Define the routes for the application; This routing is done by Angular */
app.config(['$routeProvider', '$locationProvider',
  function($routeProvider, $locationProvider) {
    $routeProvider
      .when('/home', {
        templateUrl: 'partials/home.html',
        controller: 'HomeController'
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


//TESTING

describe("LetsGoTeam", function () {

  beforeEach(module('LetsGoTeam'));

  describe("registerController", function () {

    var scope, httpBackend;
    beforeEach(inject(function ($rootScope, $controller, $httpBackend, $http) {
      scope = $rootScope.$new();
      httpBackend = $httpBackend;
      httpBackend.when("GET", "/users").respond([{nombre:"juan",password:"asd"}, {nombre:"pedro",password:"dede"}]);
      $controller('registerController', {
        $scope: scope,
        $http: $http
      });
    }));

    it("should have 3 movies", function () {
      httpBackend.flush();
      expect(scope.data.length).toBe(2);
    });
  });
});