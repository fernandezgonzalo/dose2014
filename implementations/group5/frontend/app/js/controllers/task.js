'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$log', '$location', '$routeParams', '$resource', 'Task', 
	function ($scope, $log, $location, $routeParams, $resource, Task) {
	$scope.tasksByUserId = Task.query();

 }]);