'use strict';

angular.module('coffee.core').controller('ProjectController', ['$scope', '$stateParams', '$location', 'Global', 'Projects', function ($scope, $stateParams, $location, Global, Projects) {

		$scope.find = function() {
			Projects.getList().then(function (projects) {
		        $scope.projects = projects;
		    });
		};

		$scope.findOne = function() {
			var id = $stateParams.projectId;
			Projects.one(id).get().then(function (project) {
		        $scope.project = project;
		    });
		};

		$scope.create = function() {
           Projects.post($scope.project).then(function (project) {
           		$location.path('listProjects');
            });
		};

		$scope.remove = function(project) {
			if (project) {
			    project.remove().then(function() {
			      //TODO: display a flash message
			    });

				for (var i in $scope.projects) {
					if ($scope.projects[i] === project) {
						$scope.projects.splice(i, 1);
					}
				}
			} else {
				$scope.project.remove().then(function() {
					$location.path('listProjects');
				});
			}
		};

		$scope.update = function() {
			$scope.project.put().then(function() {
		      $location.path('listProjects');
		    });
		};		
}]);