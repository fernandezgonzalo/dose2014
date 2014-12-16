'use strict';

angular.module('Mgmt')
       .controller('ProjectDashboardController', ['$scope', '$log', '$location',
                   '$routeParams', 'Utility', 'Project', 'Task', 'Datepicker', 'User',
                   function ($scope, $log, $location, $routeParams,
                             Utility, Project, Task, Datepicker, User) {

  var TAG = 'ProjectDashboardController::';
  $log.debug(TAG, 'init');

  $scope.userHash = {};
  User.query(function(users) {
    for (var i = 0; i < users.length; ++i) {
      var user = users[i];
      $scope.userHash[user.id] = user;
    }
  });

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
    Utility.toUnderscore(updatedTask);
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

    // For statistics:
    $scope.assignedTasks = 0;

    Utility.toUnderscore($scope.swimlanes);
    delete $scope.swimlanes.inProgress;

    // Wait until the actual data arrives from the server.
    data.$promise.then(function(tasks) {
      for (var i = 0; i < tasks.length; i++) {
        Utility.unescape(tasks[i]);
        $scope.swimlanes[tasks[i].status].push(tasks[i]);

        Utility.toCamel(tasks[i]);
        if (tasks[i].idUserAssigned === $scope.currentUser.id) {
          $scope.assignedTasks += 1;
        }
      }
      // $scope.chart1 = null;
      // initStatistics();
      updateStatistics();
    });
  };


  // Updated task status locally after drag & drop.
  var updateTaskStatusLocal = function(newStatus) {

    var task = $scope.swimlanes[newStatus].pop();
    task.status = newStatus;
    $scope.swimlanes[newStatus].push(task);
    updateStatistics();
  };


  // Update task locally upon update of the database.
  $scope.updateTasksLocal = function(task, newTask, deleteTask) {

    // If it's a new task, add it to swimlane according to its status.
    if (newTask) {
      $scope.swimlanes[task.status].push(task);

      if (task.idUserAssigned === $scope.currentUser.id) {
        $scope.assignedTasks += 1;
      }
      updateStatistics();
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
            if (task.idUserAssigned === $scope.currentUser.id) {
              $scope.assignedTasks -= 1;
            }
          }

          // If task status is unchanged, assigned updated task at once.
          else if (swimlane[i].status === task.status) {

            if (task.idUserAssigned === $scope.currentUser.id &&
                swimlane[i].idUserAssigned !== $scope.currentUser) {
              $scope.assignedTasks += 1;
            } else if (task.idUserAssigned !== $scope.currentUser.id &&
                swimlane[i].idUserAssigned === $scope.currentUser.id) {
              $scope.assignedTasks -= 1;
            }
            swimlane[i] = task;
          } 

          // If status changed, remove from current swimlane and add it to new.
          else {

            if (task.idUserAssigned === $scope.currentUser.id &&
                swimlane[i].idUserAssigned !== $scope.currentUser) {
              $scope.assignedTasks += 1;
            } else if (task.idUserAssigned !== $scope.currentUser.id &&
                swimlane[i].idUserAssigned === $scope.currentUser.id) {
              $scope.assignedTasks -= 1;
            }

            swimlane.splice(i, 1);
            $scope.swimlanes[task.status].push(task);
          }
          updateStatistics();
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
    if (parseInt($scope.currentUser.isAdmin) === 1 || project['id_user'] === $scope.currentUser.id) { // jshint ignore:line
      $scope.canEdit = true;
    } else {
      $scope.canEdit = false;
    }
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

  // Show or hide project statistics
  $scope.projectStatistics = false;

  $scope.toggleProjectStatistics = function() {
    $scope.projectStatistics = !$scope.projectStatistics;
  };

  // Helper functions to show statistics with updated values

  // var initStatistics = function() {
  var updateStatistics = function() {

    // Initialize array of values for chart 1 and chart 2.
    // var size = Object.keys($scope.swimlanes).length;
    $scope.valuesChart1 = [];
    var size = 4;
    while(size--) { $scope.valuesChart1[size] = 0; }

    $scope.valuesChart2 = [];
    size = 2;
    while(size--) { $scope.valuesChart2[size] = 0; }
    
    // Get the total number of tasks.
    var totalTasks = 0;
    for (var key in $scope.swimlanes) {
      totalTasks = totalTasks + $scope.swimlanes[key].length; 
    }

    // Data for chart1.
    var i = 0;
    for (key in $scope.swimlanes) {
      switch(key) {
        case 'stopped': 
          i = 0;
          break;
        case 'created': 
          i = 1;
          break;
        case 'in_progress': 
          i = 2;
          break;
        case 'finished': 
          i = 3;
          break;
      }
      $scope.valuesChart1[i] = parseFloat((($scope.swimlanes[key].length/totalTasks)*100).toFixed(2));
    }

    // Data for chart2.
    $scope.valuesChart2[0] = parseFloat((($scope.assignedTasks/totalTasks)*100).toFixed(2));
    $scope.valuesChart2[1] = parseFloat((((totalTasks-$scope.assignedTasks)/totalTasks)*100).toFixed(2));
  
    // Chart of tasks distribution.

    $scope.dataChart1 = [
      {
        value: $scope.valuesChart1[0],
        color:'#A94458',
        highlight: '#CB524F',
        label: '% tasks in Backlog'
      },
      {
        value: $scope.valuesChart1[1],
        color: '#E3A64A',
        highlight: '#F5B350',
        label: '% tasks in To Do'
      },
      {
        value: $scope.valuesChart1[2],
        color:'#31709E',
        highlight: '#3A86BD',
        label: '% tasks in Doing'
      },
      {
        value: $scope.valuesChart1[3],
        color: '#3C763F',
        highlight: '#4A924E',
        label: '% tasks in Done'
      }
    ];

    $scope.dataChart2 = [
      {
        value: $scope.valuesChart2[0],
        color:'#3EA7B2',
        highlight: '#47BECB',
        label: '% of tasks assigned to me'
      },
      {
        value: $scope.valuesChart2[1],
        color: '#7F7F7F',
        highlight: '#9F9F9F',
        label: '% of tasks assigned to others'
      }
    ];

    $scope.optionsChart1 = {
      responsive: true,
      segmentShowStroke: true,
      segmentStrokeColor: '#fff',
      segmentStrokeWidth: 2,
      percentageInnerCutout: 40,
      animationSteps: 60,
      animationEasing: 'easeOutBounce',
      animateRotate: true,
      animateScale: false,
      legendTemplate : '<ul class="tc-chart-js-legend"><% for (var i=0; i<segments.length; i++)' +
        '{%><li><span style="background-color:<%=segments[i].fillColor%>"></span>' +
        '<%if(segments[i].label){%><%=segments[i].label%><%}%></li><%}%></ul>'
    };

    $scope.legendChart1 = '';
    $scope.legendChart2 = '';

  };
}]);
