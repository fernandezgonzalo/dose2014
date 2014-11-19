'use strict';
//Setting up route
angular.module('coffee.core').config(['$stateProvider', '$urlRouterProvider',
    function($stateProvider, $urlRouterProvider) {

        $urlRouterProvider.otherwise('/projects');

        //TODO: add resolve "login"
        $stateProvider.
        state('listProjects', {
            url: '/projects',
            templateUrl: '/app/core/views/projects/index.html'
        }).
        state('createProject', {
            url: '/projects/create',
            templateUrl: '/app/core/views/projects/create.html'
        }).
        state('viewProject', {
            url: '/projects/:projectId',
            templateUrl: '/app/core/views/projects/view.html'
        }).
        state('editProject', {
            url: '/projects/:projectId/edit',
            templateUrl: '/app/core/views/projects/edit.html'
        });

    }
]);