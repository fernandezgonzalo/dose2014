'use strict';

angular.module('DOSEMS.controllers')
  .controller('TaskCtrl', function ($scope, $routeParams, $log, Tasks, RoleFactory, $location) {

      $scope.tasks = [];

      var init = function() {
		// Initialization function that gets the tasks from the server
      }();
	  
	  $scope.idTask = $routeParams.taskId;
	  $scope.idProject = $routeParams.projectId;
	  $scope.idUser = $routeParams.userId;
	  
	   $scope.userRole = RoleFactory.get({userId:$scope.idUser,projectId:$scope.idProject}, function(data){
			$log.info(data);
		});
	  
	  Tasks.query({userId:$scope.idUser,projectId:$scope.idProject,sprintId:1,tasksId:$scope.idTask},function(data){
		$log.debug(data);
		$scope.taskDetail = data[0];
	  });
	  
	  
	  $scope.editTask = function() {
		var params = {userId:$scope.idUser,projectId:$scope.idProject,sprintId:1,tasksId:$scope.idTask};
		Tasks.update(params,$scope.taskDetail,function(){
			$location.path("/user/"+$scope.idUser+"/project/"+$scope.idProject);
		});
		
		// Modifies the name, the description and the points of a task with certain id(can be executed only by the project manager and the team leader of the project)
		$log.info("yey");
	  }
	  
	  $scope.deleteTask = function(){
		$log.info("deteeeee");
		var params = {userId:$scope.idUser,projectId:$scope.idProject,sprintId:1,tasksId:$scope.idTask};
		Tasks.remove(params, function(){
			//$scope.taskDetail.$delete;
			$location.path("/user/"+$scope.idUser+"/project/"+$scope.idProject);
		});
	  }
	  
	  $scope.getTask = function(taskId) {
		// Gets from the server the task with the id=taskId
      }
	  
	  $scope.getAllTasksForUser = function(userId) {
		// Gets all tasks for the user with id=userId
      }
	  
	  $scope.getAllTasksForSprint = function(sprintId) {
		// Gets all tasks for the sprint with id=sprintId
      }
	  
	  $scope.getAllTasksForProject = function(projectId) {
		// Gets all tasks for the project with id=projectId
      }
	  
      $scope.createTask = function(name, description, points, projectId) {
		// Creates a new task for a project (can be executed only by the project manager and the team leader of the project)
      }
	  
	 
	  
	  
	  $scope.assignToUser = function(taskId, userId) {
		// Assigns a user to a task (can be executed only by the project manager and the team leader of the project)
		// If the userId is not valid the requirement should be reassigned to nobody.
      }
	  
	  $scope.setTaskStatus = function(task, status) {
		// Set the status of a task (can be executed only by the owner or executor)
      }

	  $scope.assignTaskToSprint = function(taskId, sprintId) {
		// Assigns the task with the id=taskId to the sprint with the id=sprintId
      }
	  
	  $scope.getPointsForTask = function(taskId) {
		// Gets the points of the task with the id=taskId
      }
    });
