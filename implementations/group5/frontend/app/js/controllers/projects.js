'use strict';

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log', '$location', '$route',
                   '$routeParams', '$modal', 'Utility', 'Project', 'Task',
                   function ($scope, $log, $location, $route, $routeParams,
                             $modal, Utility, Project, Task) {

  $log.debug('ProjectsController::init');

  // ---------------------------------------------------------------------------
  // CREATE

  var createProject = function(project) {
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
      $scope.createProjectError = true;
    });
  };

  // ---------------------------------------------------------------------------
  // READ 

  // Retrieve all the projects (/projects).
  Project.query(function(data) {
    // Wait until data arrives from the server and unescape strings.
    data.$promise.then(function(projects) {
      for (var i = 0; i < projects.length; i++) {
        Utility.unescape(projects[i]);
      }
      $scope.projects = projects;
    });
  }, function() {
    $log.error('There was an error while retrieving projects.');
  });


  // Retrieve data for current project (/projects/{id}/dashboard).
  if($routeParams.id) {
    var id = $routeParams.id;
    //
    // Retrieve project information.
    Project.get({projectId: id}, function(project) {
      $scope.project = project;
      Utility.unescape($scope.project);
    }, function() {
      $log.error('There was an error while loading project info.');
    });

    // Retrieve the tasks belonging to the project.
    // Project.getTasks({projectId: id}, function(data) {
    Task.getProjectTasks({projectId: id}, function(data) {

      var tasks = organizeTasks(data);

      $scope.todoTasks = tasks.todo;
      $scope.doingTasks = tasks.doing;
      $scope.doneTasks = tasks.done;
      $scope.backlogTasks = tasks.backlog;

    }, function() {
      $log.error('There was an error while loading project tasks.');
    });
  }

  // ---------------------------------------------------------------------------
  // UPDATE 

  var updateProject = function(project) {
    var updatedProject = new Project(project);
    Utility.escape(updatedProject);
    updatedProject.$update(function() {
      $log.log('Project updated successfully.');
      $route.reload();
    }, function() {
      $log.error('There was an error upon project update.');
      $scope.updateProjectError = true;
    });
  };
  
  // Update of tasks status: done when Drag & Dropping.
  var updateTaskStatus = function(task, status) {
    var updatedTask = new Task(task);
    Utility.escape(updatedTask);
    updatedTask.status = status;
    updatedTask.$update(function() {
      $log.log('Task status successfully changed.');
    }, function() {
      $log.error('There was an error upon task status update.');
    });
  };
  
  // ---------------------------------------------------------------------------
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
  
  // ---------------------------------------------------------------------------
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

        Utility.unescape(tasks[i]);
        // var t = tasks[i]; // Cast to get rid of Project prototype.
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
  
  // ---------------------------------------------------------------------------
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

  // ---------------------------------------------------------------------------
  // Drag & Drop.

  // This object is used to change selected task class on hovering.
  var draggedTask = {
    id: -1,
    origin: -1,
    over: -1
  };

  // CSS classes to be changed dynamically.
  $scope.dragDropClass = function (dragTaskId) {

    if (draggedTask.id === dragTaskId) {
      switch (draggedTask.over) {
        case 0:
          return 'btn-danger task-rotate';
        case 1:
          return 'btn-warning task-rotate';
        case 2:
          return 'btn-info task-rotate';
        case 3:
          return 'btn-success task-rotate';
        default:
          return 'btn-default task-rotate';
      }
    } else {
      return 'btn-default';
    }

  };

  $scope.startCallback = function(event, ui, task) {
    $scope.dragDropTask = task;
    draggedTask.id = task.id;
  };

  $scope.dropCallback = function(event, ui, task, status) {
    updateTaskStatus(task, status);
    $scope.dragDropTask = null;
    draggedTask.id= -1;
    draggedTask.over = -1;
  };

  $scope.overCallback = function(event, ui, over) {
    draggedTask.over = over;
  };

  $scope.outCallback = function() {
    draggedTask.over = -1;
  };

  $scope.stopCallback = function(event, ui, taskId) {
    // If drag stops, and no other task is being dragged, reset variable.
    if (draggedTask.id === taskId) {
      draggedTask.id = -1;
    }
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

