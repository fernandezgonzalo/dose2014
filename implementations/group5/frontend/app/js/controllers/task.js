'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$location', '$log','$filter', '$timeout', 'Task', 'User', 'Project', 'Comment', 'Utility',
  function ($scope, $location, $log, $filter, $timeout, Task, User, Project, Comment, Utility) {

  var TAG = 'TaskController::';
  $log.debug(TAG, 'init');

  $scope.currentTask = {};
  $scope.newComment = null;
  $scope.a = {};
  $scope.a.strComment = '';

  $scope.isNew = false;
  $scope.tasksFinished = [];
  $scope.tasksInProgress = [];
  $scope.statuses = [
    {value: 'created', text: 'Created'},
    {value: 'in_progress', text: 'In progress'},
    {value: 'stopped', text: 'Stopped'},
    {value: 'finished', text: 'Finished'}
  ];
  $scope.priorities = [
    {value: 'low', text: 'Low'},
    {value: 'high', text: 'High'},
    {value: 'critical', text: 'Critical'}
  ];
  $scope.userSelect = [];
  $scope.projectSelect = [];
  $scope.tasksComments = [];
  $scope.userHash = [];
  $scope.datePicker = {openedDate: false};
  $scope.viewCommentForm = false;
  $scope.viewDeadline = false;
  $scope.barChart = null;
  $scope.pieChart = null;
  $scope.barData = {
    labels: ['% Created tasks', '% In progress tasks', '% Stopped tasks', '% Finished tasks'],
    datasets: [
        {
            label: 'Tasks dataset',
            fillColor: 'rgba(151,187,205,0.5)',
            strokeColor: 'rgba(151,187,205,0.8)',
            highlightFill: 'rgba(151,187,205,0.75)',
            highlightStroke: 'rgba(151,187,205,1)',
            data: [0, 0, 0, 0]
        }
    ]
  };
  $scope.barOptions = {
  	responsive: true,
    scaleBeginAtZero : true,
    scaleShowGridLines : true,
    scaleGridLineColor : 'rgba(0,0,0,.05)',
    scaleGridLineWidth : 1,
    barShowStroke : true,
    barStrokeWidth : 2,
    barValueSpacing : 5,
    barDatasetSpacing : 1,
    legendTemplate : '<ul class=\"<%=name.toLowerCase()%>-legend\"><% for (var i=0; i<datasets.length; i++){%><li><span style=\"background-color:<%=datasets[i].lineColor%>\"></span><%if(datasets[i].label){%><%=datasets[i].label%><%}%></li><%}%></ul>'
  };
  $scope.pieData = [
  	  {value: 25, color: '#008000', highlight: '#90EE90', label: 'low'},
	  {value: 25, color: '#FFD700', highlight: '#EEE8AA', label: 'high'},
	  {value: 25, color: '#F7464A', highlight: '#F08080', label: 'critical'}
  ];
  $scope.pieOptions = {
  	responsive: true,
    segmentShowStroke : true,
    segmentStrokeColor : '#fff',
    segmentStrokeWidth : 2,
    percentageInnerCutout : 0, // 0 for Pie charts
    animationSteps : 100,
    animationEasing : 'easeOutBounce',
    animateRotate : true,
    animateScale : false,
    legendTemplate : '<ul>'+'<% for (var i=0; i<segments.length; i++) { %>'+'<li>'+'<span style=\"color:<%=segments[i].fillColor%>\">'+'<% if (segments[i].label) { %><%= segments[i].label %><% } %>'+'</span>'+'</li>'+'<% } %>'+'</ul>'
  };

  var onload = function() {
    $scope.currentUser.$getTasks(function(data){
      $scope.userTasks = data;
      $log.debug(TAG, data);
      var createdTasks = 0;
      var inProgTasks = 0;
      var stoppedTasks = 0;
      var low = 0;
      var high = 0;
      var critical = 0;
      for (var task in $scope.userTasks.data) {
      	Utility.unescape($scope.userTasks.data[task]);
      	//stats variables
      	if ($scope.userTasks.data[task].status === 'created') { createdTasks++; }
      	if ($scope.userTasks.data[task].status === 'in_progress') { inProgTasks++; }
      	if ($scope.userTasks.data[task].status === 'stopped') { stoppedTasks++; }
      	if ($scope.userTasks.data[task].priority === 'low') {low++;}
      	if ($scope.userTasks.data[task].priority === 'high') {high++;}
      	if ($scope.userTasks.data[task].priority === 'critical') {critical++;}

      	commentsQuery($scope.userTasks.data[task].id);

        if ($scope.userTasks.data[task].status === 'finished') {
          $scope.tasksFinished.push($scope.userTasks.data[task]);
        } else {
          $scope.tasksInProgress.push($scope.userTasks.data[task]);
        }
      }
      //stats variables
      $scope.creatTasksOnTot = (createdTasks / data.data.length * 100).toFixed(2);
      $scope.inPrTasksOnTot = (inProgTasks / data.data.length * 100).toFixed(2);
      $scope.stopTasksOnTot = (stoppedTasks / data.data.length * 100).toFixed(2);
      $scope.finTasksOnTot = ($scope.tasksFinished.length / data.data.length * 100).toFixed(2);
      $scope.lowOnTot = (low / data.data.length * 100).toFixed(2);
      $scope.highOnTot = (high / data.data.length * 100).toFixed(2);
      $scope.critOnTot = (critical / data.data.length * 100).toFixed(2);

      if ($scope.barChart) {
	      $scope.barChart.datasets[0].bars[0].value = parseFloat($scope.creatTasksOnTot);
	      $scope.barChart.datasets[0].bars[1].value = parseFloat($scope.inPrTasksOnTot);
	      $scope.barChart.datasets[0].bars[2].value = parseFloat($scope.stopTasksOnTot);
	      $scope.barChart.datasets[0].bars[3].value = parseFloat($scope.finTasksOnTot);
	      $scope.barChart.update();
      }
      if ($scope.pieChart) {
      	$scope.pieChart.segments[0].value = parseFloat($scope.lowOnTot);
      	$scope.pieChart.segments[1].value = parseFloat($scope.highOnTot);
      	$scope.pieChart.segments[2].value = parseFloat($scope.critOnTot);
      	$scope.pieChart.update();
      	$scope.pieLegend = $scope.pieChart.generateLegend();
	    $('#pieLegend').append($scope.pieLegend);
      }

    });
  };

  if ($scope.currentUser) {
    onload();
  } else {
    $scope.getCurrentUser().then(function(user) {
      $scope.setCurrentUser(user);
      onload();
    });
  }

  User.query(function(allUsers){
    for (var i = 0; i < allUsers.length; i++) {
      $scope.userSelect.push({value: allUsers[i].id, text: allUsers[i].username});
      $scope.userHash[allUsers[i].id] = allUsers[i].username;
    }
  });

  Project.query(function(allProjects){
    for (var i = 0; i < allProjects.length; i++) {
    	Utility.unescape(allProjects[i]);
    	$scope.projectSelect[allProjects[i].id] = allProjects[i].name;
    }
  });

  $scope.createTask = function(projectId) {
    $scope.currentTask = new Task();
    $scope.currentTask.idUserCreator = $scope.currentUser.id;
    $scope.currentTask.idProject = projectId;
    $scope.currentTask.idUserAssigned = '0';
    $scope.currentTask.status = 'created';
    $scope.currentTask.priority = 'low';
    Utility.toUnderscore($scope.currentTask);
    $scope.isNew = true;
    $scope.viewCommentForm = false;

    $log.debug(TAG, 'new task content', $scope.currentTask);
  };

  $scope.openTask = function(task) {
  		$scope.isNew = false;
  		$scope.viewCommentForm = false;
  		$scope.viewDeadline = false;
        $scope.currentTask = new Task(task);
        if ($scope.tasksComments[task.id]) {
	        for (var i = 0; i < $scope.tasksComments[task.id].length; i++) {
				Utility.unescape($scope.tasksComments[task.id][i]);
	        }
        }
  };

  $scope.updateTask = function(){
    Utility.toUnderscore($scope.currentTask);
    Utility.escape($scope.currentTask);
    if ($scope.isNew){
      $scope.currentTask.$save(function(){
        $scope.isNew = false;
        $('#taskModal').modal('hide');
      });
    } else {
    	var currentStatus = $scope.currentTask.status;
    	var currentTaskId = $scope.currentTask.id;
    	$scope.currentTask.$update(function(){
    		Utility.unescape($scope.currentTask);
    		$('#taskModal').modal('hide');
    		var i;
    		if (currentStatus === 'finished') {
    			for (i = 0; i < $scope.tasksFinished.length; i++) {
    				if (currentTaskId === $scope.tasksFinished[i].id) {
    					$scope.tasksFinished.splice(i, 1);
    					$scope.tasksFinished.splice(i, 0, $scope.currentTask);
    				}
    			}
    			for (i = 0; i < $scope.tasksInProgress.length; i++) {
    				if (currentTaskId === $scope.tasksInProgress[i].id) {
    					$scope.tasksInProgress.splice(i, 1);
    					$scope.tasksFinished.push($scope.currentTask);
    				}
    			}
    		}
    		if (currentStatus !== 'finished') {
    			for (i = 0; i < $scope.tasksInProgress.length; i++) {
    				if (currentTaskId === $scope.tasksInProgress[i].id) {
    					$scope.tasksInProgress.splice(i, 1);
    					$scope.tasksInProgress.splice(i, 0, $scope.currentTask);
    				}
    			}
    			for (i = 0; i < $scope.tasksFinished.length; i++) {
    				if (currentTaskId === $scope.tasksFinished[i].id) {
    					$scope.tasksFinished.splice(i, 1);
    					$scope.tasksInProgress.push($scope.currentTask);
    				}
    			}      	
    		}
    		if($scope.tasksComments[$scope.currentTask.id]) {
    			for (i = 0; i < $scope.tasksComments[$scope.currentTask.id].length; i++) {
    				Utility.escape($scope.tasksComments[$scope.currentTask.id][i]);
    				$scope.tasksComments[$scope.currentTask.id][i].$update();
    			}
    		}
    		if ($scope.barChart && $scope.pieChart) {
    			var createdTasks = 0;
    			var inProgTasks = 0;
    			var stoppedTasks = 0;
    			var totTasks = $scope.tasksFinished.length + $scope.tasksInProgress.length;
    			var low = 0;
    			var high = 0;
    			var critical = 0;

    			for (i = 0; i < $scope.tasksInProgress.length; i++) {
    				if ($scope.tasksInProgress[i].status === 'created') { createdTasks++; }
    				if ($scope.tasksInProgress[i].status === 'in_progress') { inProgTasks++; }
    				if ($scope.tasksInProgress[i].status === 'stopped') { stoppedTasks++; }
    				if ($scope.tasksInProgress[i].priority === 'low') {low++;}
      				if ($scope.tasksInProgress[i].priority === 'high') {high++;}
      				if ($scope.tasksInProgress[i].priority === 'critical') {critical++;}
    			}

    			for (i = 0; i < $scope.tasksFinished.length; i++) {
    				if ($scope.tasksFinished[i].status === 'created') { createdTasks++; }
    				if ($scope.tasksFinished[i].status === 'in_progress') { inProgTasks++; }
    				if ($scope.tasksFinished[i].status === 'stopped') { stoppedTasks++; }
    				if ($scope.tasksFinished[i].priority === 'low') {low++;}
      				if ($scope.tasksFinished[i].priority === 'high') {high++;}
      				if ($scope.tasksFinished[i].priority === 'critical') {critical++;}
    			}

    			$scope.creatTasksOnTot = (createdTasks / totTasks * 100).toFixed(2);
    			$scope.inPrTasksOnTot = (inProgTasks / totTasks * 100).toFixed(2);
    			$scope.stopTasksOnTot = (stoppedTasks / totTasks * 100).toFixed(2);
    			$scope.finTasksOnTot = ($scope.tasksFinished.length / totTasks * 100).toFixed(2);
    			$scope.barChart.datasets[0].bars[0].value = parseFloat($scope.creatTasksOnTot);
    			$scope.barChart.datasets[0].bars[1].value = parseFloat($scope.inPrTasksOnTot);
    			$scope.barChart.datasets[0].bars[2].value = parseFloat($scope.stopTasksOnTot);
    			$scope.barChart.datasets[0].bars[3].value = parseFloat($scope.finTasksOnTot);
    			$scope.barChart.update(); 
    			$scope.lowOnTot = (low / totTasks * 100).toFixed(2);
      			$scope.highOnTot = (high / totTasks * 100).toFixed(2);
      			$scope.critOnTot = (critical / totTasks * 100).toFixed(2);
      			$scope.pieChart.segments[0].value = parseFloat($scope.lowOnTot);
		      	$scope.pieChart.segments[1].value = parseFloat($scope.highOnTot);
		      	$scope.pieChart.segments[2].value = parseFloat($scope.critOnTot);
		      	$scope.pieChart.update();	
    		}
    	});
    } 
  };

  $scope.deleteTask = function(){
  	for (var i = 0; i < $scope.tasksInProgress.length; i++) {
  		if ($scope.currentTask.id === $scope.tasksInProgress[i].id) {
  			$scope.tasksInProgress.splice(i, 1);
  		}
  	}
  	for (i = 0; i < $scope.tasksFinished.length; i++) {
  		if ($scope.currentTask.id === $scope.tasksFinished[i].id) {
  			$scope.tasksFinished.splice(i, 1);
 		}
 	}
    $scope.currentTask.$delete();
    $('#taskModal').modal('hide');
  };

  var commentsQuery = function(idTask){
  	Comment.query({taskId: idTask}, function(comments) {
  		$scope.tasksComments[idTask] = comments;
  		for (var i = 0; i < $scope.tasksComments[idTask].length; i++) {
  			Utility.unescape($scope.tasksComments[idTask][i]);
  		}
	});
  };

  $scope.saveComment = function(userId, taskId){
  	$scope.newComment = new Comment();
  	Utility.toCamel($scope.newComment);
  	$scope.newComment.idTask = taskId;
  	$scope.newComment.idUser = userId;
  	$scope.newComment.commentary = $scope.a.strComment;
  	Utility.toUnderscore($scope.newComment);
  	delete $scope.newComment.idTask;
  	delete $scope.newComment.idUser;
  	$log.debug('COMMENTO DA INSERIRE::', $scope.newComment);
  	$scope.tempComment = new Comment($scope.newComment);
  	Utility.escape($scope.newComment);
  	$scope.newComment.$save(function(res){
  		$scope.tempComment.id = res.id;
  		$scope.tasksComments[taskId].push($scope.tempComment);
  	});
  };

  $scope.deleteComment = function(comment, taskId){
  	for (var i = 0; i < $scope.tasksComments[taskId].length; i++) {
  		if ($scope.tasksComments[taskId][i].id === comment.id) {
  			$scope.tasksComments[taskId].splice(i, 1);
  		}
  	}
  	comment.$delete();
  };

  $scope.getCommentsNum = function(idTask){
  	if ($scope.tasksComments[idTask]) {
  		return $scope.tasksComments[idTask].length;
  	}else{
  		return 0;
  	}
  };

  $scope.toggleComment = function() {
  	$scope.viewCommentForm = !$scope.viewCommentForm;
  };

  $scope.toggleDeadline = function() {
  	$scope.viewDeadline = !$scope.viewDeadline;
  };

  $scope.openProjectDash = function($event, projectId) {
    $location.path('/projects/'+ projectId +'/dashboard');
    $event.stopPropagation();
  };

  $scope.showStatus = function() {
      var selected = $filter('filter')($scope.statuses, {value: $scope.currentTask.status});
      return ($scope.currentTask.status && selected.length) ? selected[0].text : 'Not set';
  };
  
  $scope.showPriority = function() {
      var selected = $filter('filter')($scope.priorities, {value: $scope.currentTask.priority});
      return ($scope.currentTask.priority && selected.length) ? selected[0].text : 'Not set';
  };

  $scope.showUsers = function() {
      Utility.toCamel($scope.currentTask);
      var selected = $filter('filter')($scope.userSelect, {value: $scope.currentTask.idUserAssigned});
      var result = ($scope.currentTask.idUserAssigned && selected.length) ? selected[0].text : 'Assign to user..';
      Utility.toUnderscore($scope.currentTask);
      return result;
  };

  $scope.openDatepick = function($event) {
  	$event.preventDefault();
  	$event.stopPropagation();
  	$scope.datePicker.openedDate = true;
  	if (!$scope.currentTask.deadline) {
  		$scope.currentTask.deadline = new Date();
  	}
  };

  $scope.setPriorityClass = function(task) {
    if (task.priority === 'low') {return 'success';}
    if (task.priority === 'high') {return 'warning';}
    if (task.priority === 'critical') {return 'danger';}
  };

 }]);