'use strict';
angular.module('coffee.core').controller('RecentActivitiesController', ['$scope', '$stateParams', '$location', 'Global', 'Requirements','Projects', 'Users',
    function($scope, $stateParams, $location, Global, Requirements,Projects, Users) {

        $scope.global = Global;

        $scope.find = function() {
            var project_id = $stateParams.projectId;

            ///coffee/projects/{project_id}/recent_activities
            Projects.one(project_id).getList('recent_activities').then(function(recent_activities) {
                $scope.recent_activities = recent_activities;
            }, function error(err) {
                console.log('err',err);
            });
        };
    }
]);