'use strict';
angular.module('coffee.core').controller('SprintController', ['$scope', '$stateParams', '$location', 'Global', 'Projects', 'Users','Sprints',
    function($scope, $stateParams, $location, Global, Projects, Users, Sprints) {

        $scope.global = Global;

        $scope.find = function() {
            var project_id = $stateParams.projectId;

            Projects.one(project_id).getList('sprints').then(function(sprints) {
                $scope.sprints = sprints;
            }, function error(err) {
                console.log('err',err);
            } );
        };

        $scope.findOne = function() {
            var id = $stateParams.sprintId;
            Sprints.one(id).get().then(function(sprint) {
                $scope.sprint = sprint;
            });
        };


        function formatDate(date) {
            var d = new Date(date);
            return d.format("mm/dd/yyyy");
        }

        $scope.create = function() {
            var project_id = $stateParams.projectId;

            $scope.sprint.start_date = formatDate($scope.sprint.start_date);
            $scope.sprint.end_date = formatDate($scope.sprint.end_date);

            Projects.one(project_id).all('sprints').post($scope.sprint).then(function(project) {
                $location.path('/projects/'+ project_id);
            }, function error(err) {
                $scope.error = err.Message;
            });
        };

        $scope.remove = function(sprint) {
            if (project) {
                sprint.remove().then(function() {
                    //TODO: display a flash message
                });
                for (var i in $scope.sprints) {
                    if ($scope.sprints[i] === sprint) {
                        $scope.sprints.splice(i, 1);
                    }
                }
            } else {
                $scope.sprint.remove().then(function() {
                    $location.path('listProjects');
                });
            }
        };

        $scope.update = function() {
            $scope.sprint.put().then(function() {
                $location.path('listProjects');
            });
        };
    }
]);