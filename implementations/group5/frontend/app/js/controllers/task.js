'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$location', '$log','$filter', '$timeout', 'Task', 'User', 'Project', 'Comment', 'Utility',
  function ($scope, $location, $log, $filter, $timeout, Task, User, Project, Comment, Utility) {

  var TAG = 'TaskController::';
  $log.debug(TAG, 'init');

  $scope.currentTask = {};
  $scope.newComment = new Comment();

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
  $scope.openedDate = false;
  $scope.viewCommentForm = false;
  $scope.viewDeadline = false;

    

  var onload = function() {
    $scope.currentUser.$getTasks(function(data){
      $scope.userTasks = data;
      $log.debug(TAG, data);
      var createdTasks = 0;
      var inProgTasks = 0;
      var stoppedTasks = 0;
      for (var task in $scope.userTasks.data) {
      	Utility.unescape($scope.userTasks.data[task]);
      	//stats variables
      	if ($scope.userTasks.data[task].status === 'created') { createdTasks++; }
      	if ($scope.userTasks.data[task].status === 'in_progress') { inProgTasks++; }
      	if ($scope.userTasks.data[task].status === 'stopped') { stoppedTasks++; }

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
        $scope.currentTask = new Task(task);
  };

  $scope.updateTask = function(){
    Utility.toUnderscore($scope.currentTask);
    Utility.escape($scope.currentTask);
    if ($scope.isNew){
      $scope.currentTask.$save(function(){
        $scope.isNew = false;
        $log.debug(TAG, 'current task pushing', $scope.currentTask);
        $scope.tasksInProgress.push($scope.currentTask);
        $('#taskModal').modal('hide');
      });
    } else {
      $scope.currentTask.$update();
      $('#taskModal').modal('hide');
      var i;
      if ($scope.currentTask.status === 'finished') {
      	for (i = 0; i < $scope.tasksInProgress.length; i++) {
      		if ($scope.currentTask.id === $scope.tasksInProgress[i].id) {
      			$scope.tasksInProgress.splice(i, 1);
      			$scope.tasksFinished.push($scope.currentTask);
      		}
      	}
      	for (i = 0; i < $scope.tasksFinished.length; i++) {
      		if ($scope.currentTask.id === $scope.tasksFinished[i].id) {
      			$scope.tasksFinished.splice(i, 1);
      			$scope.tasksFinished.splice(i, 0, $scope.currentTask);
      		}
      	}
      }else{
      	for (i = 0; i < $scope.tasksInProgress.length; i++) {
      		if ($scope.currentTask.id === $scope.tasksInProgress[i].id) {
      			$scope.tasksInProgress.splice(i, 1);
      			$scope.tasksInProgress.splice(i, 0, $scope.currentTask);
      		}
      	}
      	for (i = 0; i < $scope.tasksFinished.length; i++) {
      		if ($scope.currentTask.id === $scope.tasksFinished[i].id) {
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
  	Utility.toCamel($scope.newComment);
  	$scope.newComment.idTask = taskId;
  	$scope.newComment.idUser = userId;
  	Utility.toUnderscore($scope.newComment);
  	delete $scope.newComment.idTask;
  	delete $scope.newComment.idUser;
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
  	if ($scope.viewCommentForm === false) {
  		$scope.viewCommentForm = true;
  	}else{
  		$scope.viewCommentForm = false;
  	}
  };

  $scope.toggleDeadline = function() {
  	if ($scope.viewDeadline === false) {
  		$scope.viewDeadline = true;
  	}else{
  		$scope.viewDeadline = false;
  	}
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
  $scope.openDatepick = function() {
    $timeout(function() {
      $scope.openedDate = true;
      $scope.currentTask.deadline = new Date();
    });
  };

  $scope.setPriorityClass = function(task) {
    if (task.priority === 'low') {return 'success';}
    if (task.priority === 'high') {return 'warning';}
    if (task.priority === 'critical') {return 'danger';}
  };

 }]);