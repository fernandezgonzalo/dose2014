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

		$scope.nrOfFctAccess = 0;
		$scope.tasksForSprint=[];
		$scope.usersFromProj=[];
		var selectedSprint;
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
				$log.info("!!!!!!!!!!!!!!!!!!!!");
                var i = 0;
                for(i=0;i<$scope.usersIdFromProject.length;i++)
                {
                        Users.resource.get({userId:$scope.usersIdFromProject[i].id_user},function(data){
						$log.info("users");
						$log.info(data);
							$scope.usersFromProj.push(data);
						
					
						
						});
				}	
        });

		$scope.sprintsIdForProject = SprintsForProject.get({userId:$scope.userId,projectId:$scope.projectId},function(data){
		
			$log.info($scope.sprintsIdForProject);
		});
		
		var refreshSprintTasks = function () {
			var sprintId = selectedSprint;

			$scope.tasksForSprint=[];
			$scope.tasksIdFromSprint = TasksFromSprint.query({userId:$scope.userId,projectId:$scope.projectId,sprintId:sprintId},function(data){
				var j=0;
				for(j=0;j<$scope.tasksIdFromSprint.length;j++) {
					Tasks.query({userId:$scope.userId,projectId:$scope.projectId,sprintId:sprintId,tasksId:$scope.tasksIdFromSprint[j].id},function(data){
						$scope.tasksForSprint.push(data[0]);
					});
				}
				$log.info(data);
			});
		};
		
		$scope.tasksIdFromSprintFunction = function(sprintId){
			selectedSprint = sprintId;
			$scope.nrOfFctAccess ++;
			$scope.sprintIdDisplay = sprintId;
			$log.info("aici ar tre sa fie prima!");
			refreshSprintTasks();
		}
		
		
		
        $scope.getUrl = function () {
            $scope.bla = "bla";
            $scope.absUrl = $location.absUrl();
            //$scope.lookupUserId = $routeParams.lookupUserId;
        }
        
		$scope.newTask = new Tasks();
		$scope.addTask = function(){
				var params = {userId:$scope.userId,projectId:$scope.projectId,sprintId:selectedSprint};
				$scope.newTask.$save(params,function(){
					$('#createTaskModal').modal('hide');
					refreshSprintTasks();
				});
				$log.info($scope.newTask);
				$log.info("addddd wssstask!!!!");
			
		}
    });