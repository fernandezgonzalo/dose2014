/**
 * Created by agustin on 10/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('storyTaskController', ['$scope', '$http', '$log', '$timeout','myService',
    function ($scope, $http, $log, $timeout, myService) {


         $scope.project = myService.getSavedProject();
        $scope.sprint = myService.getSavedSprint();
        $scope.stories = [];
        $scope.tasks = []

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

        $scope.storySelected = -1;

        $scope.setStorySelected = function(s){
            //$scope.storySelected = id;
            currentStory = s ;//$scope.stories[id];
        }

    }]);