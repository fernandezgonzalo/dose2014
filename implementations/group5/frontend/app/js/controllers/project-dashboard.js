'use strict';

angular.module('Mgmt')
       .controller('ProjectDashboardController', ['$scope', '$log', '$location',
                   '$routeParams', 'Utility', 'Project', 'Task', 'Datepicker',
                   function ($scope, $log, $location, $routeParams,
                             Utility, Project, Task, Datepicker) {

  $log.debug('ProjectDashboardController::init');

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
      organizeTasks(data);
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
        // Update project attributes on view
        for (var i in $scope.projectToEdit) {
          $scope.project[i] = $scope.projectToEdit[i];
        }
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
      updateTaskStatusLocal(status);
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
      });
    });
  };
                             

  // Distribute tasks into swimlanes according to their status.
  var organizeTasks = function(data) {

    $scope.swimlanes = {};
    
    $scope.swimlanes.created = [];
    $scope.swimlanes.inProgress = [];
    $scope.swimlanes.finished = [];
    $scope.swimlanes.stopped = [];

    Utility.toUnderscore($scope.swimlanes);
    delete $scope.swimlanes.inProgress;

    // Wait until the actual data arrives from the server.
    data.$promise.then(function(tasks) {
      for (var i = 0; i < tasks.length; i++) {
        $scope.swimlanes[tasks[i].status].push(tasks[i]);
      }
    });
  };


  // Updated task status locally after drag & drop.
  var updateTaskStatusLocal = function(newStatus) {

    var task = $scope.swimlanes[newStatus].pop();
    task.status = newStatus;
    $scope.swimlanes[newStatus].push(task);
  };


  // Update task locally upon update of the database.
  $scope.updateTasksLocal = function(task, newTask, deleteTask) {

    // var task = JSON.parse(JSON.stringify(taskToUpdate));


    // If new task, add it to swimlane according to its status.
    if (newTask) {
      $scope.swimlanes[task.status].push(task);
      return;
    }

    // Look for the task in the different swimlanes.
    for (var key in $scope.swimlanes) {
      var swimlane = $scope.swimlanes[key];
      for (var i = 0; i < swimlane.length; i++) {
        if (swimlane[i].id === task.id) {
          // Check is task is to be deteled.
          if (deleteTask) {
            swimlane.splice(i, 1);
          }
          // If task status is unchanged, assigned updated task at once.
          else if (swimlane[i].status === task.status) {
            swimlane[i] = task;
          } 
          // If status changed, remove from current swimlane and add it to new.
          else {
            swimlane.splice(i, 1);
            $scope.swimlanes[task.status].push(task);
          }
          return;
        }
      }
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


  // Helpers for "Edit project" modal.

  // This function is called when user clicks on "Edit project" button.
  $scope.editProject = function(project) {

    // Unlike for "New project", are init to true because they're valid already.
    $scope.projectNameOK = true;
    $scope.clientNameOK = true;
    $scope.deleteAlert = false;

    // Clone 'project' into projectToEdit to decouple the first one.
    $scope.projectToEdit = JSON.parse(JSON.stringify(project));
    $('#editProjectModal').modal('show');
    $('#editDatepicker').collapse('hide');
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

  $scope.editDatepicker = {};
  $scope.project = {};
  Datepicker.set($scope.editDatepicker, $scope.project.deadline);

  // Once a date is selected on the datepicker, collapse it.
  $scope.$watch('projectToEdit.deadline', function() {
    $('#editDatepicker').collapse('hide');
  });

  $scope.toggleAlert = function() {
    $scope.deleteAlert = !$scope.deleteAlert;
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


  // Statistics

  // Helper functions to show data

  $scope.projectStatistics = false;
  $scope.toggleProjectStatistics = function() {
    $scope.projectStatistics = !$scope.projectStatistics;
  };

  var unfinishedAssignedTasks = 7;
  var finishedAssignedTasks = 4;

  // Unfinished assigned tasks vs Finished assigned tasks.

  $scope.dataset1 = [
    {
      value: unfinishedAssignedTasks,
      color:'#F7464A',
      highlight: '#FF5A5E',
      label: 'Pending tasks'
    },
    {
      value: finishedAssignedTasks,
      color: '#46BFBD',
      highlight: '#5AD3D1',
      label: 'Finished tasks'
    }
  ];

  $scope.optionsChart1 = {
    responsive: true,
    segmentShowStroke: true,
    segmentStrokeColor: '#fff',
    segmentStrokeWidth: 2,
    percentageInnerCutout: 50,
    animationSteps: 100,
    animationEasing: 'easeOutBounce',
    animateRotate: true,
    animateScale: false,
    legendTemplate : '<ul class="tc-chart-js-legend"><% for (var i=0; i<segments.length; i++)' +
                      '{%><li><span style="background-color:<%=segments[i].fillColor%>"></span>' +
                      '<%if(segments[i].label){%><%=segments[i].label%><%}%></li><%}%></ul>'
  };


}]);
