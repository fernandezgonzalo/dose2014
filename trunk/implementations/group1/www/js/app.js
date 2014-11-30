'use strict';
var app = angular.module('DOSEMS', [
    'ngRoute', 'DOSEMS.factory', 'DOSEMS.controllers'
]);

/** Turn on/off the angular debugging; should be off when deployed */
app.config(['$logProvider', function ($logProvider) {
    $logProvider.debugEnabled(true);
}]);

/** Define the routes for the application; This routing is done by Angular */
app.config(['$routeProvider', '$locationProvider',
    function ($routeProvider) {
        $routeProvider
            .when('/login', {
                templateUrl: 'partials/login.html',
                controller: 'SessionCtrl'
            })
            .when('/signup', {
                templateUrl: 'partials/user.html',
                controller: 'UserCtrl'
            })
            .when('/user/:userId/home', {
                templateUrl: 'partials/home.html',
                controller: 'DashboardCtrl'
            })
            .when('/user', {
                templateUrl: 'partials/user.html',
                controller: 'UserCtrl'
            })
            .when('/user/:userID/logout', {
                templateUrl: 'partials/logout.html',
                controller: 'SessionCtrl'
            })
            .when('/user/:userId/project/:projectId/:lookupUserId', {
                templateUrl: 'partials/user-detail.html',
                controller: 'UserCtrl'
            })
            .when('/user/:userId/project/:projectId', {
                templateUrl: 'partials/projectDashboard.html',
                controller: 'UserCtrl'
            })
            .when('/user/home', {
                templateUrl: 'partials/home.html',
                controller: 'ProjectCtrl'
            })
            .when('/user/:userId/home/:projectId', {
                templateUrl: 'partials/home.html',
                controller: 'ProjectCtrl'
            })
            .when('/user/:userId//cpanel', {
                templateUrl: 'partials/cpanel.html',
                controller: 'UserCtrl'
            })
            .when('/ranking', {
                templateUrl: 'partials/ranking.html',
                controller: 'UserCtrl'
            })
            .when('/user/:userId', {
                templateUrl: 'partials/user.html',
                controller: 'UserCtrl'
            })

            .when('/sprint', {
                templateUrl: 'partials/sprint.html',
                controller: 'SprintCtrl'
            })
            .when('/task', {
                templateUrl: 'partials/task.html',
                controller: 'TaskCtrl'
            })
            .otherwise({
                redirectTo: '/login'
            });
    }

]);
	
	
  
  
  
  