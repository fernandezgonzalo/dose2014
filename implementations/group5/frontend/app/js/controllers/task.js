'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$log', '$location', '$routeParams', 'Task',
	function ($scope, $log, $location, $routeParams, Task) {
	var TAG = 'TaskController::';

	$scope.tasksFinished = [];
  	$scope.tasksInProgress = [];

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

  	$log.debug(TAG, 'init', $routeParams, $scope.userTasks);
  	
 }]);