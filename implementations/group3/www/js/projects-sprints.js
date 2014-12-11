/**
 * Created by agustin on 10/11/14.
 */
/**
 * Created by agustin on 10/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('projectsSprintsController', ['$scope', '$http', '$log', '$timeout','myService',
    function ($scope, $http,$location, $log, $timeout, myService) {
// the model that we bind to the input box

        $scope.userProjects = [];
        $scope.projectSprints = [];

        // $scope.projectSelected = -1;
        $scope.control = false;



        var init = function() {
            var i,j;
            for (i = 0; i < usersProjects.length; i++) {
                if(usersProjects[i].idUser === currentUser.id){
                    for (j=0; j<projects.length; j++){
                        if (usersProjects[i].idProject === projects[j].id){
                            $scope.userProjects.push(projects[j]);
                        }
                    }
                }
            }
            currentProject = {};
        }();

        $scope.setProjects = function(){
            $scope.userProjects = [];
            var i,j;
            for (i = 0; i < usersProjects.length; i++) {
                if(usersProjects[i].idUser === currentUser.id){
                    for (j=0; j<projects.length; j++){
                        if (usersProjects[i].idProject === projects[j].id){
                            $scope.userProjects.push(projects[j]);
                        }
                    }
                }
            }
            currentProject = {};

            /* $http.get('/projects')
             .success(function(data, status, header, config) {
             // the server should return a json array which contains all the todos
             $scope.projects = data;
             })
             .error(function(data, status) {
             $log.debug('Error while fetching proyects from server');
             });*/
        };

        $scope.setSprints = function(){

            $scope.projectSprints = [];
            var i;
            for (i = 0; i < sprints.length; i++) {
                if(sprints[i].idProject === currentProject.id ){
                    $scope.projectSprints.push(sprints[i]);
                }
            }
            currentSprint={};
            /* $http.get('/projects-sprints/{actualProject.id}')
             .success(function(data, status, header, config) {

             $scope.sprints = data;
             })
             .error(function(data, status) {
             $log.debug('Error while fetching proyects from server');
             });*/
        };

        $scope.shareInfo = function(info1,info2){
            myService.set(info1,info2)
        };

            $scope.setProjectSelected = function(p){
                //$scope.projectSelected = p.id;
                currentProject = p;
            };

        $scope.removeProjectSelected = function(p){
            var i,j;
            for (i = 0; i < projects.length; i++){
                if (projects[i].id === p.id){
                    projects.splice(i,1);
                }
            }
            for (i = 0; i < usersProjects.length; i++) {
                if (usersProjects[i].idProject === p.id) {
                    usersProjects.splice(i, 1);
                }
            }
            currentProject = {};
            $scope.setProjects();
        };

        $scope.removeSprintSelected = function(s){
            var i;
            for (i = 0; i < sprints.length; i++){
                if (sprints[i].id === s.id){
                    sprints.splice(i,1);
                }
            }
            for (i = 0; i < projectsSprints.length; i++){
                if (projectsSprints[i].idSprint === s.id){
                    projectsSprints.splice(i,1);
                }
            }
            currentSprint={};
            $scope.setSprints();
            /*
             $scope.userProjects = [];
             for (i = 0; i < usersProjects.length; i++) {
             if(usersProjects[i].idUser === currentUser.id){

             $scope.userProjects.push(projects[usersProjects[i].idProject-1]);
             }
             }
             currentProject = {};
             */
        };

        $scope.setSprintSelected = function(s){
            currentSprint = s
        };

        $scope.editing = function(value){
            editing = value;
        }

    }
]);