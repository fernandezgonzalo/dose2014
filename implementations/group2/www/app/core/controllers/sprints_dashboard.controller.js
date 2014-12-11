'use strict';

angular.module('coffee.core').controller('SprintsDashboardController', ['$scope', '$stateParams', '$location', '$modal', 'Global', 'Projects', 'Users', 'Requirements', 'Tasks', 'Sprints',
    function($scope, $stateParams, $location, $modal, Global, Projects, Users, Requirements, Tasks, Sprints) {

        $scope.global = Global;

        $scope.init = function() {
            var id = $stateParams.projectId;
            Projects.one(id).get().then(function(project) {
                $scope.project = project;
                $scope.sprints = project.getList('sprints').$object;
                $scope.tasks_backlog = [];
                $scope.tasks_backlog = project.getList('tasks_backlog').$object; //backend throws error
            });
        };


        $scope.loadTasks = function(sprint) {
            return Sprints.one(sprint.id).getList('tasks').$object;
        };

        $scope.assignToMe = function(task) {
            task.user_id = $scope.global.user.id;
            task.user = $scope.global.user;
            task.put().then(function(res) {
                console.log(res);
            }, function err(msg) {
                alert(msg);
            }); 
        };

        $scope.openAssign = function (project, task) {

            var modalInstance = $modal.open({
                templateUrl: '/app/core/views/projects/assign_modal.html',
                controller: 'AssignController',
                size: 'sm',
                resolve: {
                    task: function () {
                        return task;
                    },
                    project: function () {
                        return project;
                    }
                }
            });

            modalInstance.result.then(function (selected_user) {
                task.user_id = selected_user.id;
                task.user = selected_user;                
                task.put().then(function(res) {
                    console.log(res);
                }, function err(msg) {
                    alert(msg);
                });                
            }, function () {
                console.log('Modal dismissed at: ' + new Date());
            });
        };

        $scope.openLog = function (project, task) {

            var modalInstance = $modal.open({
                templateUrl: '/app/core/views/projects/log_modal.html',
                controller: 'LogController',
                size: 'sm',
                resolve: {
                    task: function () {
                        return task;
                    },
                    project: function () {
                        return project;
                    }
                }
            });

            modalInstance.result.then(function (hours) {
                task.hours_spent = hours;
                task.put().then(function(res) {
                    console.log(res);
                }, function err(msg) {
                    alert(msg);
                });                
            }, function () {
                console.log('Modal dismissed at: ' + new Date());
            });
        };

        ////////////////////////////////////////////////////
        //    Drag & Drop functions
        ////////////////////////////////////////////////////

        $scope.onDragSprint = function(sprint, task, evt) {
            var index = indexOfTask(sprint.tasks, task.id);
            if (index > -1) {
                sprint.tasks.splice(index, 1);
            }            
        };

        $scope.onDropSprint = function(sprint, task, evt) {
            var index = indexOfTask(sprint.tasks, task.id);
            if (index == -1) {
                sprint.tasks.push(task);
            }

            task.sprint_id = sprint.id;

            Requirements
            .one(task.requirement_id)
            .one('tasks', task.id)
            .customPUT(task);            
        };

        $scope.onDragBacklog = function(task,evt) {
            var index = indexOfTask($scope.tasks_backlog, task.id);
            if (index > -1) {
                $scope.tasks_backlog.splice(index, 1);
            }
        };

        $scope.onDropBacklog = function(task,evt) {
            var index = indexOfTask($scope.tasks_backlog, task.id);
            if (index == -1) {
                $scope.tasks_backlog.push(task);
            }

            task.sprint_id = null;

            Requirements
            .one(task.requirement_id)
            .one('tasks', task.id)
            .customPUT(task);   
        };


        ////////////////////////////////////////////////////
        //    Utils functions
        ////////////////////////////////////////////////////

        function indexOfTask(list, id) {
            for (var i = list.length - 1; i >= 0; i--) {
                if(list[i].id == id)
                 return i;
            };
            return -1;
        }

    }
]);