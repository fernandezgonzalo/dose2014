'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$log', '$location', '$routeParams','$filter', 'Task', 'Utility',
	function ($scope, $log, $location, $routeParams, $filter, Task, Utility) {
	var TAG = 'TaskController::';
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

  	if($routeParams.id) {
    	var id = $routeParams.id;
    	// Get task info
    	Task.get({taskId: id}, function(task) {
      		$scope.currentTask = task;
    	});
    }	

	$scope.currentUser.$getTasks(function(data){
		$scope.userTasks = data;
		$log.debug(TAG, data);
		for (var task in $scope.userTasks.data) {
			if ($scope.userTasks.data[task].status === 'finished') {
				$scope.tasksFinished.push($scope.userTasks.data[task]);
			} else {
				$scope.tasksInProgress.push($scope.userTasks.data[task]);
			}
		}
	});

	$scope.createTask = function(projectId) {
		$scope.currentTask = new Task();
		$scope.currentTask.idUserCreator = $scope.currentUser.id;
		$scope.currentTask.idProject = projectId;
		$scope.currentTask.status = 'created';
		$scope.currentTask.priority = 'low';
		Utility.toUnderscore($scope.currentTask);
		$scope.isNew = true;

		$log.debug('new task content', $scope.currentTask);
		//$scope.currentTask.$save(function() {
	  	//	$log.debug('Task created');
		//}, function() {
	  	//	$log.debug('Error creating task');
		//});
	};

	$scope.openTask = function(task) {
    	$location.path('/tasks/' + task.id);
	};

	$scope.updateTask = function(){
		$log.debug($scope.currentTask);
		if ($scope.isNew){
			$scope.currentTask.$save(function(){
				$scope.isNew = false;
				$log.debug('current task pushing', $scope.currentTask);
				$scope.tasksInProgress.push($scope.currentTask);
				$('#taskModal').modal('hide');
			});
		} else {
			$scope.currentTask.$update();
		}
		
	};

	$scope.deleteTask = function(){
		$scope.currentTask.$delete();
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


  	$log.debug(TAG, 'init', $routeParams, $scope.userTasks);
  	
 }]);