'use strict';

angular.module('DOSEMS.controllers')
  .controller('RequirementCtrl', ['$scope', '$http', '$log',
	function ($scope, $http, $log) {

      $scope.sprints = [];

      var init = function() {
		// Initialization function that gets the sprints from the server
      }();
	  
	  $scope.getSprint = function(sprintId) {
		// Gets from the server the sprint with the id=sprintId
      }
	  
	  $scope.getProjectSprints= function(projectId) {
		// Gets all tasks for the project with id=projectId
      }
	    
      $scope.createSprint = function(name, description, startDate, endDate, projectId) {
		// Creates a new sprint for a project (can be executed only by the project manager)
      }
	  
	  $scope.deleteSprint = function(sprintId) {
		// Deletes a sprint (can be executed only by the project manager)
      }
	  
	  $scope.editSprint = function(sprintId, name, description, startDate, endDate) {
		// Modifies the name, the description, the start date and the end date of a sprint with certain id(can be executed only by the project manager)
      }
	  
	  $scope.assignTaskToSprint = function(taskId, sprintId) {
		// Assigns a task to a sprint (can be executed only by the project manager and the team leader of the project)
      }
	  
	  $scope.removeTaskFromSprint = function(taskId, sprintId) {
		// Removes a task from a sprint (can be executed only by the project manager)
      }

	 
    }  
  ]);
