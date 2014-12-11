'use strict';
angular.module('coffee.core').controller('RequirementController', ['$scope', '$stateParams', '$location', 'Global', 'Requirements','Projects', 'Users',
    function($scope, $stateParams, $location, Global, Requirements,Projects, Users) {

        $scope.global = Global;
        $scope.find = function() {
            var project_id = $stateParams.projectId;

            Projects.one(project_id).getList('reqs').then(function(requirements) {
                $scope.requirements = requirements;
            }, function error(err) {
                console.log('err',err);
            });
        };

        $scope.findOne = function() {
            var id = $stateParams.requirementId;
            
            Requirements.one(id).get().then(function(requirement) {
                $scope.requirement = requirement;
                requirement.getList('tasks').then(function(tasks){
                    $scope.requirement.tasks = tasks;
                });
            },function(err){
                console.log('Error ',err);
            });
        };

        $scope.create = function() {
            var project_id = $stateParams.projectId;
            Projects.one(project_id).all('reqs').post($scope.requirement).then(function(requirement) {
                $location.path('/projects/'+ project_id);
            });
        };

        $scope.remove = function(requirement) {
            if (requirement) {
                requirement.remove().then(function() {
                    //TODO: display a flash message
                });
                for (var i in $scope.requirements) {
                    if ($scope.requirements[i] === requirement) {
                        $scope.requirements.splice(i, 1);
                    }
                }
            } else {
                $scope.requirement.remove().then(function() {
                    $location.path('listRequirements');
                });
            }
        };

        $scope.removeTask = function(requirement, task) {
            task.remove().then(function() {
                //TODO: display a flash message
            });
            for (var i in requirement.tasks) {
                if (requirement.tasks[i] === task) {
                    requirement.tasks.splice(i, 1);
                }
            }
        };

        $scope.update = function() {
            Projects
            .one($scope.requirement.project_id)
            .one('reqs', $scope.requirement.id)
            .customPUT({
                title: $scope.requirement.title,
                risk: $scope.requirement.risk,
                description: $scope.requirement.description,
                priority: $scope.requirement.priority
            }).then(function(res) {
                $location.path('listRequirements');
            });
        };
    }
]);