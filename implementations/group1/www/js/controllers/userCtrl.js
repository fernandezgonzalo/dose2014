'use strict';

angular.module('DOSEMS.controllers')
.controller('UserCtrl', function ($scope, $routeParams, $log, UserFactory,$location) {
	var userId =  $routeParams.userId;
	if (userId != null ) {
		//Get the user from server
		$scope.userId = userId;
		$scope.projectId = $routeParams.projectId;
	}	
	$scope.users = UserFactory.query(function (data) {
		$log.info(data);
		$scope.getUserInfo();
	});
	
		$scope.getUserInfo = function(){
			
			$log.info($routeParams)
			var i = 0;
			this.lookupUserId = $routeParams.lookupUserId;
			
			this.user = null;
			$log.info("fdfsd");
				$log.info($scope.users.length);
			for (i = 0; i < this.users.length; i++) 	
			{
				$log.info("fdfsd");
				if ($scope.users[i].id == this.lookupUserId) 
				{
					$log.info($scope.users[i])
					this.user = $scope.users[i];
				}
			
			}
			$log.info(this.user.lastname);
		}
		
		
		$scope.getUrl = function(){
			$scope.bla = "bla";
			$scope.absUrl = $location.absUrl();
			//$scope.lookupUserId = $routeParams.lookupUserId;
		}
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