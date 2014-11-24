'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$log', '$location', '$routeParams','$filter', 'Task',
	function ($scope, $log, $location, $routeParams, $filter, Task) {
	var TAG = 'TaskController::';

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
		$log.debug($scope.tasksFinished, 'Tasks Finished');
		$log.debug($scope.tasksInProgress, 'Tasks in Progress');
	});


	/* create TBD
	$scope.createTask = function(task) { //add project arg
		var newTask = new Task(task);
		newTask.idUserCreator = $scope.currentUser.id;
		Utility.toUnderscore(newTask);
		newTask.$save(function() {
	  		$log.debug('Task created');
	  		$location.path('/'); //to be done
		}, function() {
	  		$log.debug('error creating task');
	  		$scope.createProjectError = true;
		});
	};
	*/

	$scope.openTask = function(task) {
    	$location.path('/tasks/' + task.id);
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