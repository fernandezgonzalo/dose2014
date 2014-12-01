/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('DashboardCtrl', ['$scope', '$routeParams', '$log', 'Users', 'Projects', '$window', function ($scope, $routeParams, $log, Users, Projects, $window) {
        var userId = $routeParams.userId;
        $scope.init = function () {
            if (!$scope.LOGGED_IN) {
                $window.location.href = '/#/login';
            }
            $scope.getCurrentUser();
            $scope.getUserProjectsIDs();
            if ($scope.LOGGED_IN) {
                $log.debug("Logged In");
            }
        };
        $scope.getCurrentUser = function () {
            //Get the user from server
            var response = Users.get({userId: userId});
            response.$promise.then(function (data) {
                $log.debug(data);
                $scope.user = data;
            });
        };
        $scope.getUserProjectsIDs = function () {
            //Get the users projects from server
            var response = Projects.get({userId: userId});
            response.$promise.then(function (data) {
                $log.debug(data);
                $scope.userProjectsIDs = data;
                $scope.getUserProjects(data);
            });
        };
        $scope.getUserProjects = function (userProjectIDs) {
            angular.forEach(userProjectIDs, function (obj, id) {
                $log.debug(obj.id_project + " " + obj.id_user);
            });

        };
        $scope.init();
    }]);
