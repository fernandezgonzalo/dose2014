/**
 * Created by agustin on 10/11/14.
 */
/**
 * Created by agustin on 10/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('projectsSprintsController', ['$scope', '$http', '$log', '$timeout','myService',
    function ($scope, $http, $log, $timeout, myService) {
// the model that we bind to the input box

        $scope.userProjects = [];
        $scope.projectSprints = [];

        $scope.currentProject = {};
        // $scope.projectSelected = -1;
        $scope.control = false;

        var init = function() {

            var i;
            for (i = 0; i < usersProjects.length; i++) {
                if(usersProjects[i].idUser === currentUser.id){

                    $scope.userProjects.push(projects[usersProjects[i].idProject-1]);
                }
            }
            /* $http.get('/projects')
             .success(function(data, status, header, config) {
             // the server should return a json array which contains all the todos
             $scope.projects = data;
             })
             .error(function(data, status) {
             $log.debug('Error while fetching proyects from server');
             });*/
        }();

        $scope.setSprints = function(){

            $scope.projectSprints = [];
            var i;
            for (i = 0; i < projectsSprints.length; i++) {

                if(projectsSprints[i].idProject === $scope.currentProject.id ){

                    $scope.projectSprints.push(sprints[projectsSprints[i].idSprint -1]);
                }
            }
            /* $http.get('/projects-sprints/{actualProject.id}')
             .success(function(data, status, header, config) {

             $scope.sprints = data;
             })
             .error(function(data, status) {
             $log.debug('Error while fetching proyects from server');
             });*/
        }

        $scope.shareInfo = function(info1,info2){
            myService.set(info1,info2)
        },

            $scope.setProjectSelected = function(p){
                //$scope.projectSelected = p.id;
                $scope.currentProject = p;
            }

    }
]);