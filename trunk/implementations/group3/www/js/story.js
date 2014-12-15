'use strict';

angular.module('LetsGoTeam')
    .controller('StoryController', ['$scope', '$http', '$log', '$timeout',
        function ($scope, $http, $log, $timeout) {

            $scope.data = {};
            // the model that we bind to the input box
            $scope.story = {
                title: '',
                description: '',
                points: 0,
                notes: ''
            };

            $scope.successMsgVisible = false;

            var init = function(){
                if (editing){
                    $scope.story.title = currentStory.title;
                    $scope.story.description = currentStory.description;
                    $scope.story.points = currentStory.points
                }
            }();

            // the function to add a story
            $scope.addStory = function(newStory) {

                $scope.story = newStory;

                if (editing){ // if the user is editing
                    if (!($scope.story.title === '')) { // if the title is not blank

                        var i;
                        var acum = 0;
                        for (i = 0; i < tasks.length; i++){ // add up the total amount of points used in all tasks related to this story
                            if (tasks[i].idStory === currentStory.id){
                                acum = acum + tasks[i].points;
                            }
                        }
                        if ($scope.story.points < acum){ //if the total amount of points used in all tasks related to this story is greater than the new points amount, alert the user
                            alert("You're leaving your tasks without points! Remember to remove unwanted tasks or reduce their points before changing your total points");
                        }else{ //update the story with it's new values
                            for (i = 0; i < stories.length; i++) {
                                if (currentStory.id === stories[i].id) {
                                    stories.splice(i, 1, {
                                        id: currentStory.id,
                                        idSprint: currentSprint.id,
                                        title: $scope.story.title,
                                        description: $scope.story.description,
                                        points: $scope.story.points,
                                        notes: $scope.story.notes
                                    });
                                    $location.path("/storyTask");
                                }
                            }
                        }
                    }else{
                        alert("Don't forget to give your story a title!");
                    }
                }else{ // if the user is adding a new story
                    if (!($scope.story.title === '')){ // if the title is not blank
                        stories.push({
                            id: id_story,
                            idSprint: currentSprint.id,
                            title: $scope.story.title,
                            description: $scope.story.description,
                            points: $scope.story.points,
                            notes: $scope.story.notes
                        });
                        id_story = id_story + 1;
                        $location.path("/storyTask");
                    }else{
                        alert("Don't forget to give your story a title!");
                    }
                }


                /*
                // the payload is simple the json object that we used for binding to the input
                var payload = $scope.newStory;

                $http.post('/story', payload)
                    .success(function(data, status, header, config) {

                        $scope.data = data;

                        if ($scope.data.status === 'ok') {
                            $log.debug('Success adding a story');
                        }
                        else{
                            $log.debug('Incorrect data');
                        };


                        // reset the todoModel to not have a description (we keep the last selected user)
                        $scope.newStory.title = '';
                        $scope.newStory.description = '';
                        $scope.newStory.points = '';
                        $scope.newStory.notes = '';

                        // show a success message
                        $scope.successMsgVisible = true;
                        // let the message dissapear after 2 secs
                        $timeout(function() {$scope.successMsgVisible = false;}, 2000);
                    })
                    .error(function(data, status) {
                        $log.debug('Error while trying to add a story');
                    });
                    */
            }


        }
    ]);
/**
 * Created by luciano on 11/11/14.
 */
