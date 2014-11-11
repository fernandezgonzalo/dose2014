'use strict';

angular.module('LetsGoTeam')
    .controller('StoryController', ['$scope', '$http', '$log', '$timeout',
        function ($scope, $http, $log, $timeout) {


            // the model that we bind to the input box
            $scope.newStory = {
                title: '',
                description: '',
                points: '',
                notes: ''
            };

            $scope.successMsgVisible = false;

            // the function to add a story
            $scope.addStory = function(t, d, p, n) {

                // the payload is simple the json object that we used for binding to the input
                var payload = $scope.newStory;

                $http.post('/api/stories', payload)
                    .success(function(data, status, header, config) {

                        $log.debug('Success adding a story');

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
            }

        }
    ]);
/**
 * Created by luciano on 11/11/14.
 */
