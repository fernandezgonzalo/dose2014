'use strict';

angular.module('DOSEMS.controllers')
    .controller('ProjectCtrl', ['$rootScope', '$scope', '$routeParams', '$log', '$http', 'SprintsFactory', 'TasksFactory',
	    function ($rootScope, $scope, $routeParams, $log, $http, SprintsFactory, TasksFactory) {

		$scope.sprints = [];
		
		$scope.loadSprints = function () {
			$scope.sprints = [];
			var response = SprintsFactory.query({userId:$scope.userId,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					data[i].tasks = [];
					$scope.sprints.push(data[i]);
					$scope.getSprintTasks(data[i].id);
				}
			});
		}
		
		$scope.init = function () {
			var userId = $routeParams.userId;
			var projectId = $routeParams.projectId;
			if (userId != null) {
				$scope.userId = userId;
			}
			if (projectId != null) {
				$scope.projectId = projectId;
			}
			
			$scope.loadSprints();
		}();
		
		$scope.getSprintTasks = function (sprintId) {
			var response = TasksFactory.query({userId:$scope.userId,projectId:$scope.projectId,sprintId:sprintId});
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					$scope.getTaskInfo(sprintId, data[i].id);
				}
			});
		}
		
		$scope.getTaskInfo = function (sprintId, taskId) {
			var response = TasksFactory.get({userId:$scope.userId,projectId:$scope.projectId,sprintId:sprintId,taskId:taskId});
			response.$promise.then(function (data) {
				if (data.length > 0) {
					var task = data[0];
					var formattedTask = { id: task.id_task,
								 name: task.desc,
								 description: task.comment,
								 userId: task.id_user,
								 assignedto: task.name + " " + task.lastname,
								 points: task.points,
								 status: task.status,
								 requirement: task.id_requirement,
								 sprint: sprintId };
					var tasks = $scope.sprints.filter(function (x) { return x.id == sprintId; })[0].tasks;
					tasks.push(formattedTask);
				}
			});
		}

        $scope.getUserProjects = function (userId) {
            // Gets from the server all the projects for a user
            $http.get('/api/users/' + userId + '/projects')
                .success(function (data, status, header, config) {
                    $log.debug('Success getting user projects');
                    $scope.userProjectIDs = data;

                })
                .error(function (data, status) {
                    $log.debug('Error while getting user projects.');
                });
            $http.get('/api/users/' + userId + '/projects')
                .success(function (data, status, header, config) {
                    $log.debug('Success getting user projects');
                    $scope.userProjectIDs = data;

                })
                .error(function (data, status) {
                    $log.debug('Error while getting user projects.');
                });
        }
		
		$scope.addSprint = function () {
			var response = SprintsFactory.add({userId:$scope.userId,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				$scope.loadSprints();
			});
		}
		
		$scope.removeSprint = function (id) {
			var response = SprintsFactory.remove({userId:$scope.userId,projectId:$scope.projectId,sprintId:id});
			response.$promise.then(function (data) {
				$scope.loadSprints();
			});
		}

    }]);
	