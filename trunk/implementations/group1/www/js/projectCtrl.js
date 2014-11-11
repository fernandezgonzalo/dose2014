'use strict';

angular.module('Demo')
.controller('ProjectCtrl', ['$scope', '$routeParams','$http', '$log', function ($scope, $routeParams, $http, $log) {
	var userId =  $routeParams.userId;
	var projectId =  $routeParams.projectId;
	if (userId != null ) {
		//Get the user from server
		$scope.userId = userId;
	}
	if (projectId != null ) {
		//Get the project from server
		$scope.projectId = projectId;
	}
	$scope.projects = [];

	var init = function() {
		// Initialization function that gets the projects from the server
		}();
	  
		$scope.getUserProjects = function(userId) {
			// Gets from the server all the projects for a user
		}
	  
		$scope.createProject = function(name, description) {
			// Creates a new project with certain name
		}
	  
		$scope.deleteProject = function(projectId) {
			// Deletes a project with certain id (can be executed only by the project manager of the project)
		}
	  
		$scope.editProject = function(projectId, name, description) {
			// Modidifies the name and the description of a project with certain id
		}
	  
		$scope.addUser = function(projectId, userId) {
			// Invites a user to a project (can be executed only by the project manager and the team leader of the project)
		}
	  
		$scope.removeUser = function(projectId, userId) {
			// Removes a user from a project (can be executed only by the project manager and the team leader of the project)
		}
	  
		$scope.setTeamLeader = function(projectId, userId) {
			// Makes a user the team leader of the project (can be executed only by the project manager of the project)
		}
	  
		$scope.unsetTeamLeader = function(projectId, userId) {
			// Removes team leader role of the project (can be executed only by the project manager of the project)
		}
	  
		$scope.setIteration = function(projectId, iterationId) {
			// Sets the current iteration of the project
		}
    }  
	]);
	