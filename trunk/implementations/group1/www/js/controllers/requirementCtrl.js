'use strict';

angular.module('DOSEMS.controllers')
  .controller('RequirementCtrl', ['$scope', '$routeParams','$http', '$log',
	function ($scope, $routeParams, $http, $log) {

      $scope.requirements = [];

      var init = function() {
		// Initialization function that gets the requirements from the server
      }();
	  
	  $scope.getProjectRequirements = function(projectId) {
		// Gets from the server all the requirements for a project
      }
	  
      $scope.createRequirement = function(name, description, points, projectId) {
		// Creates a new requirement for a project (can be executed only by the project manager and the team leader of the project)
      }
	  
	  $scope.deleteRequirement = function(requirementId) {
		// Deletes a requirement (can be executed only by the project manager and the team leader of the project)
      }
	  
	  $scope.editRequirement = function(requirementId, name, description, points) {
		// Modidifies the name, the description and the points of a requirement with certain id(can be executed only by the project manager and the team leader of the project)
      }
	  
	  $scope.assignToUser = function(requirementId, userId) {
		// Assigns a user to a requirement (can be executed only by the project manager and the team leader of the project)
		// If the userId is not valid the requirement should be reassigned to nobody.
      }
	  
	  $scope.setStatus = function(requirementId, status) {
		// Set the status of a requirement (can be executed only by the user that is assigned to the requirement)
      }

	  $scope.setIteration = function(requirementId, iterationId) {
		// Sets the iteration in which the requirement will be implemented
      }
    }  
  ]);
