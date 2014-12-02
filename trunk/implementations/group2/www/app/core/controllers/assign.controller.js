'use strict';

angular.module('coffee.core').controller('AssignController', ['$scope', '$stateParams', '$location', '$modalInstance', 'Global', 'Projects', 'Users', 'Requirements', 'Tasks', 'project', 'task',
    function($scope, $stateParams, $location, $modalInstance, Global, Projects, Users, Requirements, Tasks, project, task) {

        $scope.global = Global;

		$scope.task = task;

		$scope.init = function() {
			//project.getList('users').then(function(users) {
			Users.getList().then(function(users) {
                $scope.current_users = users;
            }, function error(err) {
                console.log('err',err);
            });
		};

		$scope.selectUser = function(user) {
			$scope.selected = user;
		};

		$scope.ok = function () {
			$modalInstance.close($scope.selected);
		};

		$scope.cancel = function () {
			$modalInstance.dismiss('cancel');
		};    
    }
]);