'use strict';

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log',
                   '$location', '$routeParams', 'Utility', 'Project',
                   function ($scope, $log, $location, $routeParams, Utility, Project) {

  $log.debug('ProjectsController::init');

  // CREATE
  $scope.createProject = function(project) {
    var newProject = new Project(project);
    // Asign user ID property to the project to be created.
    newProject.idUser = $scope.currentUser.id;
    // Change attribute names from camelCase to underscore case to send to backend DB.
    Utility.toUnderscore(newProject);
    newProject.$save(function() {
      $log.log('Project created successfully.');
      $location.path('/projects');
    }, function() {
      $log.error('There was an error upon project creation.');
      $scope.createProjectError = true;
    });
  };

  // READ

  // Retrieve all the projects (/projects).
  $scope.projects = Project.query();

  // Retrieve data for current project (/projects/{id}/dashboard).
  if($routeParams.id) {
    var id = $routeParams.id;
    // Retrieve project information.
    Project.get({projectId: id}, function(project) {
      $scope.project = project;
    });
    // Retrieve tasks belonging to the project.
    Project.getTasks({projectId: id}, function(tasks) {
      $scope.tasks = tasks;
      $log.log('Array of tasks of the project:');
      $log.log(tasks);
    });
  }

  // UPDATE
  $scope.updateProject = function(project) {
    var updatedProject = new Project(project);
    updatedProject.$update(function() {
      $log.log('Project updated successfully.');
      $location.path('/projects/' + project.id + '/dashboard');
    }, function() {
      $log.error('There was an error upon project update.');
      $scope.updateProjectError = true;
    });
  };
  
  // DELETE
  $scope.deleteProject = function(project) {
    project.$delete(function() {
      $log.log('Project deleted successfully.');
      $location.path('/projects');
    }, function() {
      $log.error('There was an error upon project deletion.');
      $scope.deleteProjectError = true;
    });
  };
  
  // Methods

  $scope.openProject = function(project) {
    $location.path('/projects/' + project.id + '/dashboard');
  };

  $scope.editProject = function(project) {
    $location.path('/projects/' + project.id + '/edit');
  };
  











  $scope.finished = [
    {
      id: 1,
      name: 'Grammar recognizer',
      client: 'Science Imp.',
      author: 'Alan',
      date: 'Oct 31'
    },
    {
      id: 2,
      name: 'Shopping mobile app development',
      client: 'Amazon',
      author: 'Jeff',
      date: 'Aug 13'
    }];
}]);

