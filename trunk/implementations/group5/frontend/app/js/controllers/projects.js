'use strict';

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log', '$location', '$route',
                   '$routeParams', '$modal', 'Utility', 'Project', 'Task', 'User',
                   function ($scope, $log, $location, $route, $routeParams,
                             $modal, Utility, Project, Task, User) {

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
    
    var projects = organizeProjects(data);

    $log.info(projects);
    $scope.finishedProjects = projects.finished;
    $scope.unfinishedProjects = projects.unfinished;

  }, function() {
    $log.error('There was an error while retrieving projects.');
  });

  // $log.info($scope.unfinishedProjects);

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


  // Retrieve data for current project (/projects/{id}/dashboard).
  if ($routeParams.id) {
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
    Utility.toUnderscore(updatedProject);
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
      updateTaskScope(status);
      $log.info($scope.backlogTasks);
      $log.info($scope.todoTasks);
      $log.info($scope.doingTasks);
      $log.info($scope.doneTasks);
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

  // Change updated task status in scope after update.
  
  var updateTaskScope = function(status) {

    switch(status) {
      case 'stopped': 
        $scope.backlogTasks[$scope.backlogTasks.length-1].status = status;
        break;
      case 'created': 
        $scope.todoTasks[$scope.todoTasks.length-1].status = status;
        break;
      case 'in_progress': 
        $scope.doingTasks[$scope.doingTasks.length-1].status = status;
        break;
      case 'finished': 
        $scope.doneTasks[$scope.doneTasks.length-1].status = status;
        break;
    }
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

  // ---------------------------------------------------------------------------
  // CSS classes to be changed dynamically.

  // /projects: row coloring.
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
  
  // /project/{id}/dashboard: while dragging a task.
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


}]);

