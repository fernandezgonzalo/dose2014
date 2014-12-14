'use strict';

angular.module('DOSEMS.controllers')
    .controller('ProjectCtrl', ['$rootScope', '$scope', '$routeParams', '$log', '$http', 'SprintsFactory', 'TasksFactory', 'RequirementsFactory',
	    function ($rootScope, $scope, $routeParams, $log, $http, SprintsFactory, TasksFactory, RequirementsFactory) {

		$scope.sprints = [];
		$scope.requirements = [];
		
		$scope.loadRequirements = function () {
			$scope.requirements = [];
			/*var response = RequirementsFactory.query({userId:$scope.userId,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					var requirement = { id: data[i].id,
										name: data[i].desc,
										estimation: data[i].estimation,
										project: data[i].id_project,
										tasks: []
									};
					$scope.requirements.push(requirement);
					$scope.getRequirementTasks(requirement);
				}
			});*/
		}
		
		$scope.loadData = function () {
			$scope.sprints = [];
			$scope.requirements = [];
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
			
			$scope.loadData();
		}();
		
		$scope.getSprintTasks = function (sprintId) {
			var response = TasksFactory.query({userId:$scope.userId,projectId:$scope.projectId,sprintId:sprintId});
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					var loadRequirements = (i == data.length - 1) ? true : false;
					$scope.getTaskInfo(sprintId, data[i].id, loadRequirements);
				}
				if (data.length == 0) {
					$scope.loadRequirements();
				}
			});
		}
		
		$scope.getRequirementTasks = function (requirement) {
			var i = 0;
			var j = 0;
			for (i = 0; i < $scope.sprints.length; i++) {
				for (j = 0; j < $scope.sprints[i].tasks.length; j++) {
					var task = $scope.sprints[i].tasks[j];
					if (task.requirement == requirement.id) {
						requirement.tasks.push(task);
					}
				}
			}
		}
		
		$scope.getTaskInfo = function (sprintId, taskId, loadRequirements) {
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
					if (loadRequirements) {
						$scope.loadRequirements();
					}
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
				$scope.loadData();
			});
		}
		
		$scope.removeSprint = function (id) {
			var response = SprintsFactory.remove({userId:$scope.userId,projectId:$scope.projectId,sprintId:id});
			response.$promise.then(function (data) {
				$scope.loadData();
			});
		}
		
		$scope.addRequirement = function () {
			if (!$scope.newRequirement) {
				return;
			}
			var response = RequirementsFactory.add({userId:$scope.userId,projectId:$scope.projectId,name:$scope.newRequirement});
			response.$promise.then(function (data) {
				$scope.loadData();
			});
		}
		
		$scope.changeRequirement = function (id, name, estimation) {
			if (!name) {
				return;
			}
			var response = RequirementsFactory.update({userId:$scope.userId,projectId:$scope.projectId,requirementId: id, name:name,estimation:estimation});
			response.$promise.then(function (data) {
				$scope.loadData();
			});
		}
		
		$scope.removeRequirement = function (id) {
			var response = RequirementsFactory.remove({userId:$scope.userId,projectId:$scope.projectId,requirementId:id});
			response.$promise.then(function (data) {
				$scope.loadSprints();
			});
		}

    }]);
	