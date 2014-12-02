'use strict';

angular.module('coffee.core').controller('LogController', ['$scope', '$stateParams', '$location', '$modalInstance', 'Global', 'Projects', 'Users', 'Requirements', 'Tasks', 'project', 'task',
    function($scope, $stateParams, $location, $modalInstance, Global, Projects, Users, Requirements, Tasks, project, task) {

        $scope.global = Global;

		$scope.task = task;

		$scope.init = function() {
		};

		$scope.ok = function () {
			$modalInstance.close($scope.task.hours_spent);
		};

		$scope.cancel = function () {
			$modalInstance.dismiss('cancel');
		};    
    }
]);