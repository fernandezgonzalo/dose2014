'use strict';
angular.module('coffee.core').controller('SprintController', ['$scope', '$filter','$stateParams', '$location', 'Global', 'Projects', 'Users','Sprints',
    function($scope, $filter, $stateParams, $location, Global, Projects, Users, Sprints) {

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
                sprint.start_date = formatDate(sprint.start_date);
                sprint.end_date = formatDate(sprint.end_date);  
                $scope.sprint = sprint;              
            });
        };


        function formatDate(date) {
            var myDate = date.split("/");
            var d = new Date(myDate[2],myDate[0]-1,myDate[1]);
            return $filter("date")(d, 'yyyy-MM-dd');
        }

        function formatDateBack(d) {
            return $filter("date")(d, 'MM/dd/yyyy');
        }

        $scope.create = function() {
            var project_id = $stateParams.projectId;

            $scope.sprint.start_date = formatDateBack($scope.sprint.start_date);
            $scope.sprint.end_date = formatDateBack($scope.sprint.end_date);

            Projects.one(project_id).all('sprints').post($scope.sprint).then(function(project) {
                $location.path('/projects/'+ project_id);
            }, function error(err) {
                $scope.error = err.Message;
            });
        };

        $scope.remove = function(sprint) {
            if (sprint) {
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
            Sprints
            .one($scope.sprint.id)
            .customPUT({
                number: $scope.sprint.number,
                start_date: formatDateBack($scope.sprint.start_date),
                end_date: formatDateBack($scope.sprint.end_date)
            }).then(function(res) {
                $location.path('listProjects');
            });

        };
    }
]);