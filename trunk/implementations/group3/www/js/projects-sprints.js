/**
 * Created by agustin on 10/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('projectsSprintsController', ['$scope', '$http', '$log', '$timeout','myService',
    function ($scope, $http, $log, $timeout, myService) {
// the model that we bind to the input box

        $scope.projects = [];

        var init = function() {
            $http.get('/api/projects')
                .success(function(data, status, header, config) {

                    // the server should return a json array which contains all the todos
                    $scope.projects = data;
                })
                .error(function(data, status) {
                    $log.debug('Error while fetching proyects from server');
                });
        }();

        $scope.shareInfo = function(info1,info2){
            myService.set(info1,info2)
        },

       /* $scope.projects = [ {id:0,
            name: 'Project1',
            owner: 'Juan' ,
            startDate: 23457777,
            completionDate:17334566,
            status: 'open',
            sprints: [{name:"sprint1",startDate:1734555 ,completionDate:17334566,status:1},{name:"sprin2",startDate:1234555 ,completionDate:12334566,status:2},{name:"sprint3",startDate:1234555 ,completionDate:12334566,status:3}]
            },
            {   id:1,
                name: 'Project2',
                owner: 'Pablo' ,
                startDate: 23457777,
                completionDate:1733456622,
                status: 'close',
                sprints: [{name:"sprint1",startDate:1234555 ,completionDate:12334566, status:1},{name:"sprin2",startDate:1234555 ,completionDate:12334566,date:2}]},
            {   id:2,
                name: 'Project3',
                owner: 'Bartolome Mitre' ,
                startDate: 23457777,
                completionDate:17334566,
                status: 'open'}
            ],*/

            $scope.projectSelected = -1;

            $scope.setProjectSelected = function(id){
                $scope.projectSelected = id;
            }

    }
]);
