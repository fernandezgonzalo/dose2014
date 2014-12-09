'use strict';

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log', '$location', 
                   '$routeParams', 'Utility', 'Project', 'User', 'Datepicker',
                   function ($scope, $log, $location, $routeParams,
                             Utility, Project, User, Datepicker) {

  $log.debug('ProjectsController::init');

  // Retrieve all the projects. 
  Project.query(function(data) {
    
    var projects = organizeProjects(data);
    $scope.finishedProjects = projects.finished;
    $scope.unfinishedProjects = projects.unfinished;

  }, function() {
    $log.error('There was an error while retrieving projects.');
  });

  // Retrieve all users to get their names for /projects page.
  $scope.authors = {};
  User.query(function(data) {
    data.$promise.then(function(users) {
      for (var i = 0; i < users.length; i++) {
        Utility.unescape(users[i]);
        // Create a Hash table to map User ID with Username.
        $scope.authors[users[i].id] = users[i].username;
      }
    });
  });

  $scope.createProject = function(project) {
    // Close modal manually and wait until it completely fades
    $('#newProjectModal').modal('hide');
    $('#newProjectModal').on('hidden.bs.modal', function() {
      var newProject = new Project(project);
      // Asign user_id property to the project to be created.
      newProject.idUser = $scope.currentUser.id;
      // Change attribute names from camelCase to underscore to send to server DB.
      Utility.toUnderscore(newProject);
      Utility.escape(newProject);
      newProject.$save(function(serverResponse) {
        $log.log('Project created successfully.');
        $location.path('/projects/' + serverResponse.id + '/dashboard');
      }, function() {
        $log.error('There was an error upon project creation.');
      });
    });
  };

  // Distribute projects into "In progress" and "Finished".
  var organizeProjects = function(data) {

    var finished = [];
    var unfinished = [];

    // Wait until data arrives from the server.
    data.$promise.then(function(projects) {
      for (var i = 0; i < projects.length; i++) {

        Utility.toCamel(projects[i]);
        Utility.unescape(projects[i]);
        if (projects[i].isFinished === 1) {
          finished.push(projects[i]);
        } else {
          unfinished.push(projects[i]);
        }
      }
    });
    return {
      'finished': finished,
      'unfinished': unfinished
    };
  };

  // Go to project's Dashboard.
  $scope.openProject = function(project) {
    $location.path('/projects/' + project.id + '/dashboard');
  };


  // Helpers for "New project" modal.

  $scope.openNewProjectModal = function() {

    // Reset flags and project attributes
    $scope.projectNameOK = false;
    $scope.clientNameOK = false;
    for (var i in $scope.project) {
      $scope.project[i] = null;
    }

    $('#newProjectModal').modal('show');
    $('#newDatepicker').collapse('hide');
  };
    
  $scope.checkProjectName = function(data) {
    if (data.length !== 0) {
      $scope.projectNameOK = true;
    } else {
      $scope.projectNameOK = false;
    }
  };

  $scope.checkClientName = function(data) {
    if (data.length !== 0) {
      $scope.clientNameOK = true;
    } else {
      $scope.clientNameOK = false;
    }
  };

  $scope.newDatepicker = {};
  $scope.project = {};
  Datepicker.set($scope.newDatepicker, $scope.project.deadline);

  // Once a date is selected on the datepicker, collapse it.
  $scope.$watch('project.deadline', function() {
    $('#newDatepicker').collapse('hide');
  });


  // CSS classes to be changed dynamically.
  $scope.unfinishedProjectClass = function(even) {
    if (even) {
      return 'danger';
    } else {
      return 'success';
    }
  };
  $scope.finishedProjectClass = function(even) {
    if (even) {
      return 'active';
    } else {
      return '';
    }
  };
  
}]);
