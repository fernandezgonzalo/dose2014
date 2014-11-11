/**
 * Created by alan on 11/11/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('ProjectCtrl', ['$scope', '$routeParams','$http', '$log', function ($scope, $routeParams, $http, $log) {
    var user =  $routeParams.user;
    var project =  $routeParams.project;

    $scope.newProject = function(name, description,startDate, endDate, status) {

    }

    $scope.share = function(project, user) {

    }



}
]);

