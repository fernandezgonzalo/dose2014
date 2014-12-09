'use strict';

var app = angular.module('LetsGoTeam', [
  'ngRoute', 'facebook','googleplus'
]);

var projects = [{id:1 ,name:'P1' }];
var id_user = 4,id_project = 6,id_sprint = 5,id_story = 4,id_task= 2;
var currentUser={};
var currentProject={};
var currentSprint={};
var currentStory={};
var users = [{id:1 ,firstName:'Juanito',LastName:'Perez',email:'jPe@gmail.com',password:'perez'},
  {id:2 ,firstName:'Pablito',LastName:'Lopez',email:'pLo@gmail.com',password:'lopez'},
  {id:3 ,firstName:'alan',LastName:'gonzalez',email:'a',password:'a'}];
var usersProjects = [{idProject:1,idUser:1},{idProject:2,idUser:1},{idProject:3,idUser:2}, {idProject:4,idUser:3}, {idProject:5,idUser:3}];
var usersTasks = [{idTask:1,idUser:1},{idTask:1,idUser:1},{idTask:1,idUser:2}];
var projects = [{id:1 , name:'Project1', owner:'Juanito', status:'open', startDate:21345667},
  {id:2 , name:'Project2', owner:'Juanito', status:'open', startDate:97345667},
  {id:3 , name:'Project3', owner:'Pablito', status:'open', startDate:145667},
  {id:4 , name:'Project4', owner:'alan', status:'open', startDate:145667},
  {id:5 , name:'Project5', owner:'alan', status:'open', startDate:145667}];
var projectsSprints =[{idProject:1,idSprint:1},{idProject:1,idSprint:2},{idProject:2,idSprint:3}, {idProject:4,idSprint:4}, {idProject:4,idSprint:1}, {idProject:5,idSprint:2}];
var sprints = [{id:1 , idProject:1, name:'Sprint1', status:'open', startDate:12345667, completionDate:445123211},
  {id:2 , idProject:1, name:'Sprint2', status:'close', startDate:32265667, completionDate:884312311},
  {id:3 , idProject:2,name:'Sprint3', status:'open', startDate:777945667, completionDate:88931911},
  {id:4 , idProject:4,name:'Sprint4', status:'open', startDate:777945667, completionDate:88931911}];
var stories = [{id:1 , idSprint:1, title:'Story1', description:'Hi', points:5, notes:'ok'},
  {id:2 , idSprint:1, title:'Story2', description:'Hi', points:15, notes:'ok'},
  {id:3 , idSprint:2, title:'Story3', description:'Hi', points:35, notes:'ok'} ];
var tasks = [{id:1, idStory:1, description:'Task1', number:1, points:5, status:1}];
var logged = false;


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
      .when('/project', {
          templateUrl: 'partials/project.html',
          controller: 'projectController'
      })
        .when('/shareProject', {
          templateUrl: 'partials/shareProject.html',
          controller: 'ShareProjectCtrl'
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