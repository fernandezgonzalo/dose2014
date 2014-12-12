'use strict';

angular.module('DOSEMS.controllers')
    .controller('ProjectCtrl', ['$rootScope', '$scope', '$routeParams', '$log', '$http', 'RegisteredUsers', 'SprintsForProject', 'SprintTasks', 'TaskInfo',
	            function ($rootScope, $scope, $routeParams, $log, $http, RegisteredUsers, SprintsForProject, SprintTasks, TaskInfo) {
		
		$scope.allusers = [];
		$scope.sprints = [];
		
		$scope.init = function () {
		    var userId = $routeParams.userId;
			var projectId = $routeParams.projectId;
			if (userId != null) {
				$scope.userId = userId;
			}
			if (projectId != null) {
				$scope.projectId = projectId;
			}
			
			$rootScope.$broadcast('ProjectPage', $scope.projectId);

			var response = RegisteredUsers.get();
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					$scope.allusers.push(data[i]);
				}
				$scope.getSprints();
			});
		}();
		
		$scope.getSprints = function () {
			var response = SprintsForProject.get({userId:$scope.userId,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					data[i].tasks = [];
					$scope.sprints.push(data[i]);
					$scope.getSprintTasks(data[i].id);
				}
			});
		}
		
		$scope.getSprintTasks = function (sprintId) {
			var response = SprintTasks.get({userId:$scope.userId,projectId:$scope.projectId,sprintId:sprintId});
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					$scope.getTaskInfo(sprintId, data[i].id);
				}
			});
		}
		
		$scope.getTaskInfo = function (sprintId, taskId) {
			var response = TaskInfo.get({userId:$scope.userId,projectId:$scope.projectId,sprintId:sprintId,taskId:taskId});
			response.$promise.then(function (data) {
				var task = data[0];
				$scope.text = task;
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

        $scope.createProject = function (name, description) {
            // Creates a new project with certain name
        }

        $scope.deleteProject = function (projectId) {
            // Deletes a project with certain id (can be executed only by the project manager of the project)
        }

        $scope.editProject = function (projectId, name, description) {
            // Modidifies the name and the description of a project with certain id
        }

        $scope.addUser = function (projectId, userId) {
            // Invites a user to a project (can be executed only by the project manager and the team leader of the project)
        }

        $scope.removeUser = function (projectId, userId) {
            // Removes a user from a project (can be executed only by the project manager and the team leader of the project)
        }

        $scope.setTeamLeader = function (projectId, userId) {
            // Makes a user the team leader of the project (can be executed only by the project manager of the project)
        }

        $scope.unsetTeamLeader = function (projectId, userId) {
            // Removes team leader role of the project (can be executed only by the project manager of the project)
        }

        $scope.setIteration = function (projectId, iterationId) {
            // Sets the current iteration of the project
        }
    }]);
	