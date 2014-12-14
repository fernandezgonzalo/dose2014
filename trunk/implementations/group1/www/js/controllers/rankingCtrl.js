'use strict';

angular.module('DOSEMS.controllers')
    .controller('RankingCtrl', ['$rootScope', '$scope', '$routeParams', '$log', 'ProjectRanking', '$location', function ($rootScope, $scope, $routeParams, $log, ProjectRanking, $location) {

		$scope.projectRanking = [];
		
		$scope.init = function() {
		
			var userId = $routeParams.userId;
			if (userId != null) {
				$scope.userId = $routeParams.userId;
			}
			
			var projectId = $routeParams.projectId;
			if (projectId != null) {
				$scope.projectId = $routeParams.projectId;
			}
			
			var response = ProjectRanking.get({userId:$scope.userId,projectId:$scope.projectId});
			response.$promise.then(function (data) {
				var i = 0;
				for (i = 0; i < data.length; i++) {
					$scope.projectRanking.push({ fullName: data[i].name + " " + data[i].lastname, points: data[i].points });
				}
			});
		};
		
		$scope.init();
    }]);