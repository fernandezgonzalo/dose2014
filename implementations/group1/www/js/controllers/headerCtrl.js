/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('HeaderCtrl', ['Users', '$scope', '$log', '$cookieStore', '$location', function (Users, $scope, $log, $cookieStore, $location) {
		
		$scope.init = function () {
			$scope.isProjectPage = false;
            $scope.loggedIn = $cookieStore.get('loggedIn');
            if ($scope.loggedIn) {
                $scope.userId = $cookieStore.get('userId');
                $log.debug("HeaderCtrl");
                $log.debug($scope.userId);
                Users.resource.get({userId: $scope.userId}).$promise.then(function (data) {
                    $scope.user = data;
                });
            }

        };
        $scope.$on('loggedIn', function (event, data) {
            $scope.userId = $cookieStore.get('userId');
            $scope.loggedIn = true;
            $log.debug("Responded to the loggedIn event");
            Users.resource.get({userId: $scope.userId}).$promise.then(function (data) {
                $scope.user = data;
            });
            $log.debug("HeaderCtrl");
            $log.debug($scope.userId);
        });
        $scope.$on('loggedOut', function (event, data) {
            $log.debug("Responded to the loggedOut event");
            $scope.loggedIn = false;
            $scope.user = null;
        });
		
		$scope.$on('$locationChangeSuccess', function(event) {
			if ($location.path().indexOf("project") > -1) {
				$scope.isProjectPage = true;
			} else {
				$scope.isProjectPage = false;
			}
		});
		
		$scope.$on('ProjectPage', function (event, data) {
			if ($location.path().indexOf("project") > -1) {
				$scope.isProjectPage = true;
				$scope.projectId = data;
			} else {
				$scope.isProjectPage = false;
			}
        });

        $scope.init();
    }]);