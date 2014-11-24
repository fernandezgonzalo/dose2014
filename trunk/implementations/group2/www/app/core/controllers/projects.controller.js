'use strict';
angular.module('coffee.core').controller('ProjectController', ['$scope', '$stateParams', '$location', 'Global', 'Projects', 'Users',
    function($scope, $stateParams, $location, Global, Projects, Users) {

        $scope.global = Global;

        $scope.find = function() {
            console.log("hglobal:",$scope.global);
            var user_id = $scope.global.user.id;

            Users.one(user_id).getList('projects').then(function(projects) {
                $scope.projects = projects;
            }, function error(err) {
                console.log('err',err);
            } );
        };

        $scope.findOne = function() {
            var id = $stateParams.projectId;
            Projects.one(id).get().then(function(project) {
                $scope.project = project;
                project.getList('reqs').then(function(reqs){
                    $scope.project.reqs = reqs;
                });

                project.getList('sprints').then(function(sprints){
                    $scope.sprints = sprints;
                });
            });
        };

        $scope.create = function() {
            Projects.post($scope.project).then(function(project) {
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
    }
]);