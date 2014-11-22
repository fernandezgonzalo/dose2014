'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$log', '$location', '$routeParams', 
	function ($scope, $log, $location, $routeParams) {
	var TAG = 'TaskController::';
	$log.debug(TAG, 'init');

	$scope.tasksFinished = [];
  	$scope.tasksInProgress = [];

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



	$scope.openProjectDash = function($event) {
    $location.path('/projects/1/dashboard');
    $event.stopPropagation();
  	};

  	$log.debug(TAG, 'init', $routeParams, $scope.userTasks);
  	
 }]);