'use strict';
angular.module('coffee.core').controller('TaskController', ['$scope', '$stateParams', '$location', 'Global', 'Requirements','Projects','Tasks', 'Users',
    function($scope, $stateParams, $location, Global, Requirements,Projects,Tasks, Users) {

        $scope.global = Global;

        $scope.init = function(){
            var requirement_id = $stateParams.requirementId;
            var r = Requirements.one(requirement_id).get().then(function(req){
                Projects.one(req.project_id).getList('sprints').then(function(sprints){
                    $scope.sprints = sprints;
                });
            });
        };

        $scope.find = function() {
            var user_id = $scope.global.user.id;

            Users.one(user_id).getList('tasks').then(function(tasks) {
                $scope.tasks = tasks;
            }, function error(err) {
                console.log('err',err);
            } );
        };

        $scope.findOne = function() {
            var id = $stateParams.taskId;
            Tasks.one(id).get().then(function(task) {
                $scope.task = task;
            });
        };

        $scope.create = function() {
            var requirement_id = $stateParams.requirementId;
            var user_id = $scope.global.user.id;
            var sprint_id = null;
            if ($scope.task.sprint_id) {
                var sprint_id = $scope.task.sprint_id.id;
                $scope.task.sprint_id = sprint_id;  
            }

            $scope.task.requirement_id = requirement_id;
            $scope.task.user_id = user_id;
            $scope.task.last_modified = "";
            Requirements.one(requirement_id).all('tasks').post($scope.task).then(function(task) {
                $location.path('/requirements/'+ requirement_id);
            });
        };

        $scope.remove = function(task) {
            if (task) {
                task.remove().then(function() {
                    //TODO: display a flash message
                });
                for (var i in $scope.tasks) {
                    if ($scope.tasks[i] === task) {
                        $scope.tasks.splice(i, 1);
                    }
                }
            } else {
                $scope.task.remove().then(function() {
                    $location.path('listTask');
                });
            }
        };

        $scope.update = function() {
            $scope.requirement.put().then(function() {
                $location.path('listTasks');
            });
        };
    }
]);