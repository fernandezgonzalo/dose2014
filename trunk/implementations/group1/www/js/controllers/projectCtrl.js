'use strict';

angular.module('DOSEMS.controllers')
    .controller('ProjectCtrl', ['$rootScope', '$scope', '$routeParams', '$log', function ($rootScope, $scope, $routeParams, $http, $log) {
        var userId = $routeParams.userId;
        var projectId = $routeParams.projectId;
        if (userId != null) {
            //Get the user from server
            $scope.userId = userId;
        }
        if (projectId != null) {
            //Get the project from server
            $scope.projectId = projectId;
        }
		
		$rootScope.$broadcast('ProjectPage', $scope.projectId);
		
        $scope.userProjectIDs = [];
        $scope.userProjects = [];

        $scope.getUserProjects = function (userId) {
            // Gets from the server all the projects for a user
            $http.get('/api/users/' + userId + '/projects')
                .success(function (data, status, header, config) {
                    $log.debug('Success getting user projects');
                    $scope.userProjectIDs = data;

                })
                .error(function (data, status) {
                    $log.debug('Error while getting user projects.');
                });
            $http.get('/api/users/' + userId + '/projects')
                .success(function (data, status, header, config) {
                    $log.debug('Success getting user projects');
                    $scope.userProjectIDs = data;

                })
                .error(function (data, status) {
                    $log.debug('Error while getting user projects.');
                });


        }

        $scope.createProject = function (name, description) {
            // Creates a new project with certain name
        }

        $scope.deleteProject = function (projectId) {
            // Deletes a project with certain id (can be executed only by the project manager of the project)
        }

        $scope.editProject = function (projectId, name, description) {
            // Modidifies the name and the description of a project with certain id
        }

        $scope.addUser = function (projectId, userId) {
            // Invites a user to a project (can be executed only by the project manager and the team leader of the project)
        }

        $scope.removeUser = function (projectId, userId) {
            // Removes a user from a project (can be executed only by the project manager and the team leader of the project)
        }

        $scope.setTeamLeader = function (projectId, userId) {
            // Makes a user the team leader of the project (can be executed only by the project manager of the project)
        }

        $scope.unsetTeamLeader = function (projectId, userId) {
            // Removes team leader role of the project (can be executed only by the project manager of the project)
        }

        $scope.setIteration = function (projectId, iterationId) {
            // Sets the current iteration of the project
        }
    }
    ]);
	