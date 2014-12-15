/**
 * Created by agustin on 10/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('storyTaskController', ['$scope', '$http', '$log', '$timeout','myService',
    function ($scope, $http, $log, $timeout, myService) {


         $scope.project = currentProject;
        $scope.sprint = currentSprint;
        $scope.currStory = currentStory;
        $scope.stories = [];
        $scope.tasks = [];

        var init = function() {
           /* $http.get('/sprint-stories/{sprint.id}')
                .success(function(data, status, header, config) {

                    $scope.stories = data;
                })
                .error(function(data, status) {
                    $log.debug('Error while fetching stories from server');
                });*/
            $scope.stories = [];
            var i;
            for (i = 0; i < stories.length; i++) {
                if(stories[i].idSprint === $scope.sprint.id ){
                    $scope.stories.push(stories[i]);
                }
            }
        }();

        $scope.setTasks = function(){
           /* $http.get('/projects-sprints/{actualProject.id}')
                .success(function(data, status, header, config) {

                    $scope.tasks = data;
                })
                .error(function(data, status) {
                    $log.debug('Error while fetching proyects from server');
                });*/
            $scope.tasks = [];
            var i;
            for (i = 0; i < tasks.length; i++) {

                if(tasks[i].idStory === currentStory.id ){

                    $scope.tasks.push(tasks[i]);
                }
            }
        };

        $scope.removeSelectedTask = function(t){
            var i;
            for (i = 0; i < tasks.length; i++){
                if (tasks[i].id === t.id){
                    sprints.splice(i,1);
                }
            }
            for (i = 0; i < usersTasks.length; i++){
                if (usersTasks[i].idTask === t.id){
                    usersTasks.splice(i,1);
                }
            }
            $scope.tasks = [];
            var i;
            for (i = 0; i < tasks.length; i++) { //for each task

                if(tasks[i].idStory === currentStory.id ){ //find the task with the same idStory as the current one

                    $scope.tasks.push(tasks[i]);
                }
            }
        }

        $scope.removeSelectedStory = function(s){
            var i;
            for (i = 0; i < stories.length; i++){
                if (stories[i].id === s.id){
                    sprints.splice(i,1);
                }
            }
            $scope.stories = [];
            var i;
            for (i = 0; i < stories.length; i++) {
                if(stories[i].idSprint === $scope.sprint.id ){
                    $scope.stories.push(stories[i]);
                }
            }
        }


        /*$scope.stories = [ {id:0,
            name: 'Story1',
            points:3,
            status: 'open',
            tasks: [{name:"task1", status:1 }, {name:"task2", status:1 } ,{name:"task3", status:3 }, {name:"task4", status:2 }]
        },
            {   id:1,
                name: 'Story2',
                points:8,
                status: 'close',
                tasks: [{name:"task1", status:4 }, {name:"task2", status:1 } ]},
            {   id:2,
                name: 'Story3',
                points:6,
                status: 'open'}
        ],*/

        $scope.editing = function(t){
            editing = t;
        }

        $scope.storySelected = -1;

        $scope.setTaskSelected = function(t){
            currentTask = t;
        }

        $scope.setStorySelected = function(s){
            //$scope.storySelected = id;
            currentStory = s ;//$scope.stories[id];
        }

    }]);