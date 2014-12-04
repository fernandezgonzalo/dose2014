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



        // the function to add the new users
        $scope.addProject = function (newProject) {

            $scope.project = newProject;

            projects.push({id:id_project, name:$scope.project.name, owner:$scope.project.owner, status:$scope.project.status, startDate:$scope.project.startDate});
            usersProjects.push({idProject:id_project,idUser:currentUser.id});
            id_project=id_project+1;


        }
    }
]);