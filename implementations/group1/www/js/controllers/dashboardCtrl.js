/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('DashboardCtrl', function ($scope, $routeParams, $log, Users, Projects) {
        var userId = $routeParams.userId;
        $scope.init = function () {
            $scope.getCurrentUser();
            $scope.getUserProjects();
        };
        $scope.getCurrentUser = function () {
            //Get the user from server
            $scope.user = Users.get({userId: userId});
            $scope.user.$promise.then(function (data) {
                $scope.user = data[0];
                $log.debug($scope.user);
                $log.debug($scope.user.email);
            });
        };
        $scope.getUserProjects = function () {
            //Get the users projects from server
            $scope.usersProjects = Projects.get({userId: userId});
            $scope.usersProjects.$promise.then(function (data) {
                $scope.usersProjects = data[0];
                $log.debug($scope.usersProjects);
            });
        };
        $scope.init();
    });
