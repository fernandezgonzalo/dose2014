/**
 * Created by agustin on 04/12/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('projectController', ['$scope', '$http', '$log', '$timeout',
    function ($scope, $http, $log, $timeout) {
// the model that we bind to the input box
        $scope.data = {};
        $scope.currUser = currentUser;
        $scope.project = {
            name: '',
            owner: '',
            status: '',
            startDate: ''

        };

        $scope.successMsgVisible = false;


        $scope.getUsers = function (){
            var i;
            var j;
            for(i = 0; i < usersProjects.length ; i++){
                for(j = 0; i < users.length ; j++){
                    if(usersProjects[i].idProject === users[j].id){
                        $scope.usersInProject.push(users[j]);
                    }
                }
            }
            $scope.usersInProject.push({id:3 ,firstName:'alan',LastName:'gonzalez',email:'a',password:'a'});
        }

        // the function to add the new users
        $scope.addProject = function (newProject) {

            $scope.project = newProject;

            projects.push({id:id_project, name:$scope.project.name, owner:$scope.project.owner, status:$scope.project.status, startDate:$scope.project.startDate});
            usersProjects.push({idProject:id_project,idUser:currentUser.id});
            id_project=id_project+1;


        }
    }
]);