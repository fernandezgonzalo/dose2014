/**
 * Created by luciano on 11/11/14.
 */
'use strict';

angular.module('LetsGoTeam')
    .controller('TaskController', ['$scope', '$http', '$log', '$location', '$timeout',
        function ($scope, $http, $log, $location, $timeout) {

           // $scope.project = myService.getSavedProject();
           // $scope.sprint = myService.getSavedSprint();
           // $scope.stories = myService.getSavedStory()
            $scope.taskUsers = [];
            $scope.data = {};
            // the model that we bind to the input box
            $scope.task = {
                description: '',
                number: 0,
                points: 0
            };

            $scope.successMsgVisible = false;

            var init = function(){
                $scope.taskUsers = [];
                var i,j;
                for (i = 0; i < usersProjects.length; i++) {
                    if (currentProject.id === usersProjects[i].idProject){
                        for (j = 0; j < users.length; j++){
                            if (usersProjects[i].idUser === users[j].id)
                            $scope.taskUsers.push(users[j]);
                        }
                    }

                }
                var acum = 0;
                for (i = 0; i < tasks.length; i++){ // adds up all the points used in all tasks related to the current story
                    if (tasks[i].idStory === currentStory.id){
                        acum = acum + tasks[i].points;
                    }
                }
                $scope.maxPoints = currentStory.points - acum; // subtracts the total amount of points with the amount used to know how many are available

                if (editing){
                    $scope.task.description = currentTask.description;
                    $scope.task.number = currentTask.number;
                    $scope.task.points = currentTask.points;
                }
            }();

            // the function to add a story
            $scope.addTask = function(newTask) {

                $scope.task = newTask;
                if (!($scope.task.description === '')){ // if the title is not blank
                    if (!($scope.task.points > $scope.maxPoints)){ // if the amount of points is lower or equal to the max number of points available
                        if (editing){ // if the user is editing
                            var i;
                            for (i = 0; i < tasks.length ; i++){
                                if (currentTask.id === tasks[i].id){
                                    tasks.splice(i, 1, {
                                        id: currentTask.id,
                                        idStory: currentStory.id,
                                        description: $scope.task.description,
                                        number: $scope.task.number,
                                        points: $scope.task.points
                                    });
                                    $location.path("/storyTask");
                                }
                            }
                        }else { // if the user is adding a new task
                            tasks.push({
                                id: id_task,
                                idStory: currentStory.id,
                                description: $scope.task.description,
                                number: $scope.task.number,
                                points: $scope.task.points
                            });
                            id_task = id_task + 1;
                            $location.path("/storyTask");
                        }

                    }else{
                        alert("You only have "+$scope.maxPoints+" points available to assign. Don't go overboard!");
                    }
                }else{
                    alert("Remember to give your task a description! How will your team know what to do?!");
                }
                //$location.path("/storyTask");

                /*
                // the payload is simple the json object that we used for binding to the input
                var payload = $scope.newTask;

                $http.post('/task', payload)
                    .success(function(data, status, header, config) {

                        $scope.data = data;

                        if ($scope.data.status === 'ok') {
                            $log.debug('Success adding a task');
                        }
                        else{
                            $log.debug('Incorrect data');
                        };



                        // reset the todoModel to not have a description (we keep the last selected user)
                        $scope.newTask.description = '';
                        $scope.newTask.number = '';
                        $scope.newTask.assignees = '';

                        // show a success message
                        $scope.successMsgVisible = true;
                        // let the message dissapear after 2 secs
                        $timeout(function() {$scope.successMsgVisible = false;}, 2000);
                    })
                    .error(function(data, status) {
                        $log.debug('Error while trying to add a task');
                    });
                    */
            }

        }
    ]);
