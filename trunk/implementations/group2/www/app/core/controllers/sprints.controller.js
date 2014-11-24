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
            var id = $stateParams.projectId;
            Projects.one(id).get().then(function(project) {
                $scope.project = project;
            });
        };

        $scope.create = function() {
             var project_id = $stateParams.projectId;

            Projects.one(project_id).all('sprints').post($scope.sprint).then(function(project) {
                $location.path('listSprints');
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
    }
]);