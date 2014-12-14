'use strict';

angular.module('DOSEMS.controllers')
	.controller('ManageUsersCtrl', ['$rootScope', '$scope', '$routeParams', '$log', 'DevelopersFactory', 'GetUsersFactory', 'RoleFactory', '$location',
		function ($rootScope, $scope, $routeParams, $log, DevelopersFactory, GetUsersFactory, RoleFactory, $location) {
		
		$scope.projectUserIds = [];
		$scope.projectUsers = [];
        $scope.leftUsers = [];
		$scope.registeredUsers = [];
        $scope.selectedUser = null;

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
			
			var response = GetUsersFactory.query();
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					$scope.registeredUsers.push(data[i]);
				}
				$scope.getProjectUsers();
			});
		}();

		$scope.addUser = function () {
			if ($scope.selectedUser < 1 || !$scope.role) {
				return;
			}
			
			var response = DevelopersFactory.add({userId: $scope.selectedUser, projectId: $scope.projectId, role: $scope.role});
			response.$promise.then(function () {
				for (var i = 0; i < $scope.leftUsers.length; i++) {
					if ($scope.leftUsers[i].id === $scope.selectedUser) {
						var user = $scope.leftUsers[i];
						user.role = $scope.role;
						$scope.projectUsers.push(user);
						$scope.leftUsers.splice(i, 1);
					}
				}
			});
		}
		
		$scope.removeUser = function (id) {
			var response = DevelopersFactory.remove({userId:$scope.userId,projectId:$scope.projectId,developerId:id});
			response.$promise.then(function () {
				for (var i = 0; i < $scope.projectUsers.length; i++) {
					if ($scope.projectUsers[i].id_user == id) {
						var developer = $scope.projectUsers[i];
						$scope.projectUsers.splice(i, 1);
						$scope.leftUsers.push(developer);
					}
				}
			});
		}
		
		$scope.getProjectUsers = function() {
			var response = DevelopersFactory.query({userId:$scope.userId,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				$scope.getRoles(data);
				$scope.updateLists();
			});
		}
		
		$scope.getRoles = function(developers) {
			var i = 0;
			for (i = 0; i < developers.length; i++) {
				$scope.projectUserIds.push(developers[i].id_user);
				$scope.getUserRole(developers[i].id_user);
			}
		}
		
		$scope.updateLists = function() {		
			var i = 0;
			for (i = 0; i < $scope.registeredUsers.length; i++) {
				if ($scope.projectUserIds.indexOf($scope.registeredUsers[i].id) > -1) {
					$scope.projectUsers.push($scope.registeredUsers[i]);
				} else {
					$scope.leftUsers.push($scope.registeredUsers[i]);
				}
			}
		}
		
		$scope.getUserRole = function(id) {
			var response = RoleFactory.get({userId:id,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				var current = $scope.projectUsers.filter(function (x) { return x.id == id; });
				if (current.length > 0) {
					current[0].role = data[0].role;
				}
			});
		}
    }]);
	