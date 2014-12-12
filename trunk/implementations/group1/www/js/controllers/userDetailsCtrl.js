'use strict';

angular.module('DOSEMS.controllers').
controller('UserDetailsCtrl', function($routeParams,$scope,$log,Users){

	$scope.userId = $routeParams.userId;
	$scope.projectId = $routeParams.projectId;
	$scope.users = Users.resource.query(function (data) {
		$log.info(data);
		$scope.getUserInfo();
	});
	
	$scope.getUserInfo = function(){
	
			var i = 0;
			this.lookupUserId = $routeParams.lookupUserId;
			
			this.user = null;
			for (i = 0; i <$scope.users.length; i++) 	
			{
				if ($scope.users[i].id == this.lookupUserId) 
				{
					this.user = $scope.users[i];
				}
			
			}
		}
		
	
});
