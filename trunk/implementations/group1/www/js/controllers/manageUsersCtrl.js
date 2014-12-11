'use strict';

angular.module('DOSEMS.controllers')
	.controller('ManageUsersCtrl', ['$rootScope', '$scope', '$routeParams', '$log', 'UsersFromProject', 'RegisteredUsers', 'UserDetails', 'UserRole', 'RemoveUserFromProject', '$location', '$window', function ($rootScope, $scope, $routeParams, $log, UsersFromProject, RegisteredUsers, UserDetails, UserRole, RemoveUserFromProject, $location, $window) {
		
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
			
			// TODO: remove
			/*var response = UserRole.get({userId:$scope.userId,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				$scope.text = data;
			});*/
			
			var response = RegisteredUsers.get();
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					$scope.registeredUsers.push(data[i]);
				}
				$scope.getProjectUsers();
			});		
		}();
		
		// TODO: Update the database
		/*$scope.addUser = function () {
			for (var i = 0; i < $scope.allUsers.length; i++) {
				if ($scope.allUsers[i].id === $scope.selectedUser) {
					$scope.projectUsers.push({ id: $scope.selectedUser, name: $scope.allUsers[i].name, role: $scope.role });
				}
			}
		}*/
		
		$scope.removeUser = function (id) {
			var response = RemoveUserFromProject.remove({userId:$scope.userId,projectId:$scope.projectId,developerId:id});
			response.$promise.then(function () {
				$window.alert("ok");
				for (var i = 0; i < $scope.projectUsers.length; i++) {
					if ($scope.projectUsers[i].id_user == id) {
						var developer = $scope.projectUsers[i];
						$scope.projectUsers.splice(i, 1);
						$scope.leftUsers.push(developer);
					}
				}
			}, function () { $window.alert("failure");});
		}
		
		$scope.getProjectUsers = function() {
			var response = UsersFromProject.get({userId:$scope.userId,projectId:$scope.projectId});
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
			var response = UserRole.get({userId:id,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				$scope.projectUsers.filter(function (x) { return x.id_user == id; })[0] = data;
			});
		}
    }]);
	