/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('DashboardCtrl', ['$scope', '$routeParams', '$log', 'Users', 'Projects', '$window', '$cookieStore', function ($scope, $routeParams, $log, Users, Projects, $window, $cookieStore) {
        $scope.init = function () {
            $scope.userId = $routeParams.userId;
            Users.resource.get({userId: $scope.userId}).$promise.then(function (data) {
                $scope.user = data[0];
            });
            if (!$cookieStore.get('loggedIn')) {
                $window.location.href = '/#/login';
                return;
            }
            $scope.getUserProjectsIDs();
            $scope.newProjectData = {
                name: '',
                info: ''
            };
            $scope.emptyInput = false;
        };
        $scope.getUserProjectsIDs = function () {
            //Get the users projects from server
            var response = Projects.get({userId: $scope.userId});
            response.$promise.then(function (data) {
                $log.debug("Dashboard - Getting userProjectIds");
                $log.debug(data);
                $scope.userProjectsIDs = data;
                $scope.getUserProjects(data);
            });
        };
        $scope.getUserProjects = function (userProjectIDs) {
            $log.debug("Dashboard - Getting userProjects");
            $scope.userProjects = [];
            angular.forEach(userProjectIDs, function (obj, id) {
                var response = Projects.get({userId: obj.id_user, projectId: obj.id_project});
                response.$promise.then(function (data) {
                    $log.debug("Printing project data");
                    $log.debug(data);
                    $scope.userProjects.push(data[0])
                });
            });

        };


        $scope.newProject = function () {
            //Check that input isn't empty
            if ($scope.newProjectData.name.length == 0 ||
                $scope.newProjectData.info.length == 0
            ) {
                $scope.emptyInput = true;
                return;
            }

            Projects.save($scope.newProjectData, function (response) {
                var newProject = {
                    name: $scope.newProjectData.name,
                    info: $scope.newProjectData.info
                };
                $scope.userProjects.push(newProject);
                $scope.newProjectData.info = '';
                $scope.newProjectData.name = '';
            });
        };
        $scope.init();
    }]);
