/**
 * Created by agustin on 10/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('storyTaskController', ['$scope', '$http', '$log', '$timeout','myService',
    function ($scope, $http, $log, $timeout, myService) {


         $scope.project = myService.getSavedProject();
        $scope.sprint = myService.getSavedSprint();
        $scope.stories = []

        var init = function() {
            $http.get('/api/stories')
                .success(function(data, status, header, config) {

                    // the server should return a json array which contains all the stories
                    $scope.stories = data;
                })
                .error(function(data, status) {
                    $log.debug('Error while fetching stories from server');
                });
        }();




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

        $scope.setStorySelected = function(id){
            $scope.storySelected = id;
        }

    }]);