/**
 * Created by agustin on 10/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('projectsSprintsController', ['$scope', '$http', '$log', '$timeout','myService',
    function ($scope, $http, $log, $timeout, myService) {
// the model that we bind to the input box

        $scope.projects = [];
        $scope.sprints = [];
        $scope.actualProject = {};
        $scope.projectSelected = -1;

        var init = function() {
            $http.get('/projects')
                .success(function(data, status, header, config) {
                    // the server should return a json array which contains all the todos
                    $scope.projects = data;
                })
                .error(function(data, status) {
                    $log.debug('Error while fetching proyects from server');
                });
        }();

        $scope.setSprints = function(){
            $http.get('/projects-sprints/{actualProject.id}')
                .success(function(data, status, header, config) {

                    $scope.sprints = data;
                })
                .error(function(data, status) {
                    $log.debug('Error while fetching proyects from server');
                });
        }

        $scope.shareInfo = function(info1,info2){
            myService.set(info1,info2)
        },

        $scope.setProjectSelected = function(id){
                $scope.projectSelected = id;
                $scope.actualProject = $scope.projects[id];
        }

    }
]);
