'use strict';

angular.module('Demo.controllers')
.controller('UserCtrl', function ($scope, $routeParams, $log, UserFactory) {
	var userId =  $routeParams.userId;
	if (userId != null ) {
		//Get the user from server
		$scope.userId = userId;
	}	
	$scope.users = UserFactory.query(function (data) {
		$log.info(data);
	});
	
		$scope.addUser = function (username, password, email, fistName, lastName) {
			//Add a new user to the server. 
		}
	  
		$scope.deleteUser = function (userID) {
			//Delete a user. Can only be used ny the superuser or the user with userId
		  
		}
	  
		$scope.updateUser = function (userID, username, password, email, fistName, lastName) {
			//Update a user. Can only be used ny the superuser or the user with userId
	  	
		  
		}
	  
		$scope.getUser = function(userID){
			//Retrives a user from the server with a specifir userId
		  
		}
	});