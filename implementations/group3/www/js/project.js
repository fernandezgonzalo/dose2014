/**
 * Created by agustin on 04/12/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('projectController', ['$scope', '$http', '$log', '$timeout',
    function ($scope,$location, $http, $log, $timeout) {
// the model that we bind to the input box
        $scope.data = {};
        $scope.currUser = currentUser;
        $scope.project = {
            name: '',
            owner: '',
            status: {},
            startDate: new Date()


        };
        $scope.usersInProject=[];
        $scope.statuses = [{stat:'open'},{stat:'closed'}];

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
        };

        $scope.addProject = function (newProject) {

            $scope.project = newProject;

            if (!($scope.project.name === '')) {
                if (editing) {
                    var i;
                    for (i = 0; i < projects.length; i++) {
                        if (currentProject.id === projects[i].id) {
                            projects.splice(i, 1, {
                                id: currentProject.id,
                                name: $scope.project.name,
                                owner: $scope.currUser.firstName,
                                status: $scope.project.status,
                                startDate: $scope.project.startDate
                            });
                        }
                    }
                    editing = false;
                } else {
                    projects.push({
                        id: id_project,
                        name: $scope.project.name,
                        owner: $scope.project.owner,
                        status: $scope.project.status,
                        startDate: $scope.project.startDate
                    });
                    usersProjects.push({idProject: id_project, idUser: currentUser.id});
                    id_project = id_project + 1;

                }
                $location.path("/projectsSprints");
            }
            else {
                alert("You forgot to give your project a name!");
            }

        }
    }
]);