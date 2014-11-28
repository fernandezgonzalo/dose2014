'use strict';

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log', '$location',
                   '$route', '$routeParams', '$modal', 'Utility', 'Project',
                   function ($scope, $log, $location, $route, $routeParams,
                             $modal, Utility, Project) {

  $log.debug('ProjectsController::init');

  // -------------------------------------------------------
  // CREATE

  var createProject = function(project) {
    var newProject = new Project(project);
    // Asign user_id property to the project to be created.
    newProject.idUser = $scope.currentUser.id;
    // Change attribute names from camelCase to underscore case to send to backend DB.
    Utility.toUnderscore(newProject);
    newProject.$save(function(serverResponse) {
      $log.log('Project created successfully.');
      $location.path('/projects/' + serverResponse.id + '/dashboard');
    }, function() {
      $log.error('There was an error upon project creation.');
      $scope.createProjectError = true;
    });
  };

  // -------------------------------------------------------
  // READ 

  // Retrieve all the projects (/projects).
  $scope.projects = Project.query();

  // Retrieve data for current project (/projects/{id}/dashboard).
  if($routeParams.id) {
    var id = $routeParams.id;
    //
    // Retrieve project information.
    Project.get({projectId: id}, function(project) {
      $scope.project = project;
    }, function() {
      $log.error('There was an error while loading project info.');
    });

    // Retrieve the tasks belonging to the project.
    Project.getTasks({projectId: id}, function(data) {

      var tasks = organizeTasks(data);

      $scope.todoTasks = tasks.todo;
      $scope.doingTasks = tasks.doing;
      $scope.doneTasks = tasks.done;
      $scope.backlogTasks = tasks.backlog;

    }, function() {
      $log.error('There was an error while loading project tasks.');
    });
  }

  // -------------------------------------------------------
  // UPDATE 

  var updateProject = function(project) {
    var updatedProject = new Project(project);
    updatedProject.$update(function() {
      $log.log('Project updated successfully.');
      // $location.path('/projects/' + project.id + '/dashboard');
      $route.reload();
    }, function() {
      $log.error('There was an error upon project update.');
      $scope.updateProjectError = true;
    });
  };
  
  // -------------------------------------------------------
  // DELETE 

  var deleteProject = function(project) {
    var deletedProject = new Project(project);
    deletedProject.$delete(function() {
      $log.log('Project deleted successfully.');
      $location.path('/projects');
    }, function() {
      $log.error('There was an error upon project deletion.');
      $scope.deleteProjectError = true;
    });
  };
  
  // -------------------------------------------------------
  // Helper functions

  $scope.openProject = function(project) {
    $location.path('/projects/' + project.id + '/dashboard');
  };

  $scope.editProject = function(project) {
    $location.path('/projects/' + project.id + '/edit');
  };

  // Distribute tasks into swimlanes according to their status.
  var organizeTasks = function(data) {

    var todo = [];
    var doing = [];
    var done = [];
    var backlog = [];

    // Wait until the actual data arrives from the server.
    data.$promise.then(function(tasks) {
      for (var i = 0; i < tasks.length; i++) {

        switch (tasks[i].status) {
          case 'created':
            todo.push(tasks[i]);
          break;
          case 'in_progress':
            doing.push(tasks[i]);
          break;
          case 'finished':
            done.push(tasks[i]);
          break;
          case 'stopped':
            backlog.push(tasks[i]);
          break;
          default:
            $log.error('Task ' + tasks[i].id + ' has no valid status');
          break;
        }
      }
    });

    return {
      'todo': todo,
      'doing': doing,
      'done': done,
      'backlog': backlog
    };
  };
  
  // -------------------------------------------------------
  // Modal pop-ups

  $scope.openModal = function(action) {

    var modalInstance;

    switch (action) {

      case 'new':
        modalInstance = $modal.open({
          templateUrl: 'partials/projects_new.html',
          controller: 'NewModalController',
          size: 'sm',
          resolve: {
            createProject: function() { return createProject; },
          }
        });
        break;

      case 'edit':
        modalInstance = $modal.open({
          templateUrl: 'partials/projects_edit.html',
          controller: 'EditModalController',
          size: 'sm',
          resolve: {
            project: function() { return $scope.project; },
            updateProject: function() { return updateProject; },
            deleteProject: function() { return deleteProject; }
          }
        });
        break;

        default:
          $log.error('Undefined modal.');
          break;
    }

    modalInstance.result.then(function() {
      $log.log('It is in ' + action + ' modal instance');
    }, function() {
      $log.info('Modal dismissed at: ' + new Date());
    });

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

