/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('DashboardCtrl', function ($scope, $routeParams, $log, UserFactory, ProjectFactory) {
        var userId = $routeParams.userId;
        $scope.init = function () {
            $scope.getCurrentUser();
            $scope.getUserProjects();
        };
        $scope.getCurrentUser = function () {
            //Get the user from server
            $scope.user = UserFactory.get({userId: userId});
            $scope.user.$promise.then(function (data) {
                $scope.user = data[0];
                $log.info($scope.user);
                $log.info($scope.user.email);
            });
        };
        $scope.getUserProjects = function () {
            //Get the users projects from server
            $scope.usersProjects = ProjectFactory.get({userId: userId});
            $scope.usersProjects.$promise.then(function (data) {
                $scope.usersProjects = data[0];
                $log.info($scope.usersProjects);
            });
        };
        $scope.init();
    });
