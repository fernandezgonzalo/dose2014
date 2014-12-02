'use strict';

angular.module('DOSEMS.controllers')
    .controller('UserCtrl', function ($scope, $routeParams, $log, UsersFromProject, Users,SprintsForProject, Sprints, TasksFromSprint, Tasks,$location) {

        $scope.text = "blas";
        $scope.users2 = [
            {fullName: "Muriel Priestly", points: 21},
            {fullName: "Arline Buendia", points: 47},
            {fullName: "Yahaira Beller", points: 25},
            {fullName: "Bell Curtin", points: 25},
            {fullName: "Lonnie Banh", points: 36},
            {fullName: "Theodora Forshey", points: 12},
            {fullName: "Jermaine Vinson", points: 51},
            {fullName: "Rosalind Wool", points: 43},
            {fullName: "Lucy Violette", points: 46},
            {fullName: "Janise Columbus", points: 29}
        ];

        var userId = $routeParams.userId;
        if (userId != null) {
            //Get the user from server
            $scope.userId = $routeParams.userId;
            $scope.projectId = $routeParams.projectId;
            $log.info($scope.userId);
            $log.info($scope.projectId);
        }
        $log.info("fdf");
        $scope.usersIdFromProject = UsersFromProject.get({userId:$scope.userId,projectId:$scope.projectId},function (data) {
				$log.info($scope.usersIdFromProject.length);
				$log.info()
                var i = 0;
                for(i=0;i<$scope.usersIdFromProject.length;i++)
                
                        $scope.usersFromProj = Users.resource.get({userId:$scope.usersIdFromProject[i].id_user},function(data){});
        
        });

		$scope.sprintsIdForProject = SprintsForProject.get({userId:$scope.userId,projectId:$scope.projectId},function(data){
		
			$log.info($scope.sprintsIdForProject);
		/*	var i = 0;
			for(i=0;i<$scope.sprintsIdForProject.length;i++)
				$scope.sprintsForProj = Sprints.get({userId:$scope.userId,projectId:$scope.projectId,sprintId:$scope.sprintsIdForProject[i].id},function(data){
				
					$log.info(sprintsForProj);
				
			//TasksFromSprint
			});*/
		});
		//----------------decomment this if you wanna test get all tasks from Sprint 1
	/*	$scope.tasksIdFromSprint = TasksFromSprint.get({userId:$scope.userId,projectId:$scope.projectId,sprintId:1},function(data){
			$log.info(data);
		
		});
	*/	
		
		// -------------decomment this is you wanna test task details for project 1, sprint 1
		
	
	/*	$scope.taskInfo = Tasks.get({userId:$scope.userId,projectId:$scope.projectId,sprintId:1,tasksId:1},function(data){
			$log.info(data);
		
		});
		*/
		
        $scope.getUrl = function () {
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

        $scope.getUser = function (userID) {
            //Retrives a user from the server with a specifir userId

        }
    });