angular.module('Mgmt')
       .controller('ProjectDashboardController', ['$scope', '$log', '$location',
                   '$routeParams', '$route', 'Utility', 'Project', 'Task', 'Datepicker',
                   function ($scope, $log, $location, $routeParams, $route,
                             Utility, Project, Task, Datepicker) {

  $log.debug('ProjectDashboardController::init');

  $scope.editDatepicker = {};
  Datepicker.set($scope.editDatepicker);

  // Retrieve data for current project.
  if ($routeParams.id) {
    var id = $routeParams.id;
    
    // Retrieve project information.
    Project.get({projectId: id}, function(project) {
      $scope.project = project;
      Utility.unescape($scope.project);
    }, function() {
      $log.error('There was an error while loading project info.');
    });

    // Retrieve the tasks belonging to the project.
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

  $scope.updateProject = function(project) {
    // Close modal manually and wait until it completely fades
    $('#editProjectModal').modal('hide');
    $('#editProjectModal').on('hidden.bs.modal', function() {
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
      // $log.info($scope.backlogTasks);
      // $log.info($scope.todoTasks);
      // $log.info($scope.doingTasks);
      // $log.info($scope.doneTasks);
    }, function() {
      $log.error('There was an error upon task status update.');
    });
  };
  
  $scope.deleteProject = function(project) {
    // Close modal manually and wait until it completely fades
    $('#editProjectModal').modal('hide');
    $('#editProjectModal').on('hidden.bs.modal', function() {
      var deletedProject = new Project(project);
      deletedProject.$delete(function() {
        $log.log('Project deleted successfully.');
        $location.path('/projects');
      }, function() {
        $log.error('There was an error upon project deletion.');
        $scope.deleteProjectError = true;
      });
    });
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

  // CSS class to be changed dynamically while dragging a task.
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

  // This function is called when user clicks on "Edit project" button.
  $scope.editProject = function(project) {
    // Clone 'project' object to decouple it.
    $scope.projectToEdit = JSON.parse(JSON.stringify(project));
  };

}]);
