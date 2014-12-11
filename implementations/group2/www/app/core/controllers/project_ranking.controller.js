    'use strict';
angular.module('coffee.core').controller('ProjectRankingController', ['$scope', '$http', '$stateParams', '$location', 'Global','Projects', 'Users',
    function($scope, $http, $stateParams, $location, Global, Projects, Users) {
        $scope.global = Global;

        $scope.init = function() {
            $scope.findProject();
            $scope.findUserRanking();
        };

        $scope.findProject = function() {
            var id = $stateParams.projectId;
            Projects.one(id).get().then(function(project) {
                $scope.project = project;
            });
        };

        $scope.findUserRanking = function() {
            var project_id = $stateParams.projectId;

            Projects.one(project_id).getList('users').getList('ranking').then(function(ranking) {
                $scope.current_users = ranking;
            }, function error(err) {
                console.log('err',err);
            });
        };

    }
]);