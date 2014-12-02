/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('DashboardCtrl', ['$scope', '$routeParams', '$log', 'Users', 'Projects', '$window', function ($scope, $routeParams, $log, Users, Projects, $window) {
        var userId = $routeParams.userId;
        $log.debug("RouteParam = " + userId);
        $scope.init = function () {
            if (!Users.loggedIn) {
                $window.location.href = '/#/login';
            }
            $scope.getUserProjectsIDs();

        };
        $scope.getUserProjectsIDs = function () {
            //Get the users projects from server
            var response = Projects.get({userId: userId});
            response.$promise.then(function (data) {
                $log.debug("Dashboard - Getting userProjectIds");
                $log.debug(data);
                $scope.userProjectsIDs = data;
                $scope.getUserProjects(data);
            });
        };
        $scope.getUserProjects = function (userProjectIDs) {
            $log.debug("Dashboard - Getting userProjects");
            angular.forEach(userProjectIDs, function (obj, id) {
                $log.debug(obj.id_project + " " + obj.id_user);
            });

        };
        $scope.init();
    }]);
