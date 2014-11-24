'use strict';
angular.module('coffee.core').controller('RequirementController', ['$scope', '$stateParams', '$location', 'Global', 'Requirements','Projects', 'Users',
    function($scope, $stateParams, $location, Global, Requirements,Projects, Users) {

        $scope.global = Global;

        $scope.find = function() {
            var user_id = $scope.global.user.id;

            Users.one(user_id).getList('requirements').then(function(requirements) {
                $scope.requirements = requirements;
            }, function error(err) {
                console.log('err',err);
            } );
        };

        $scope.findOne = function() {
            console.log('dwd');
            var id = $stateParams.requirementId;
            console.log(id)
            
            Requirements.one(id).get().then(function(requirement) {
                $scope.requirement = requirement;
            },function(err){
                console.log('Error ',err);
            });
        };

        $scope.create = function() {
            ///projects/{project_id}/reqs
            //$scope.requirement.
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

        $scope.update = function() {
            $scope.requirement.put().then(function() {
                $location.path('listRequirements');
            });
        };
    }
]);