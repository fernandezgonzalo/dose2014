'use strict';
angular.module('coffee.core').controller('ProjectUsersController', ['$scope', '$http', '$stateParams', '$location', 'Global', 'Requirements','Projects', 'Users',
    function($scope, $http, $stateParams, $location, Global, Requirements,Projects, Users) {
        $scope.global = Global;

        $scope.init = function() {
            $scope.findProject();
            $scope.findCurrentUsers();
            $scope.findAllUsers();
        };

        $scope.findProject = function() {
            var id = $stateParams.projectId;
            Projects.one(id).get().then(function(project) {
                $scope.project = project;
            });
        };

        $scope.findCurrentUsers = function() {
            var project_id = $stateParams.projectId;

            Projects.one(project_id).getList('users').then(function(users) {
                $scope.current_users = users;
            }, function error(err) {
                console.log('err',err);
            });
        };

        $scope.findAllUsers = function() {
            Users.getList().then(function(users) {
                $scope.users = users;
            });
        };

        $scope.addUser = function(user) {
            var project_id = $stateParams.projectId;

            Users.one(user.id).all('projects').one(project_id).post().then(function(response) {
                $scope.current_users.push(user);
            });
        };

        $scope.removeUser = function(user) {
            var project_id = $stateParams.projectId;

            Users.one(user.id).all('projects').one(project_id).remove().then(function(response) {
                for (var i in $scope.current_users) {
                    if ($scope.current_users[i].id === user.id) {
                        $scope.current_users.splice(i, 1);
                    }
                }
            });
        };

    }
]);