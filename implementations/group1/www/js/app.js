'use strict';
var app = angular.module('DOSEMS', [
    'ngRoute', 'DOSEMS.services', 'DOSEMS.controllers'
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
                controller: 'LoginCtrl'
            })
            .when('/signup', {
                templateUrl: 'partials/signup.html',
                controller: 'SignupCtrl'
            })
            .when('/user/:userId/home', { //Showing user dashboard
                templateUrl: 'partials/home.html',
                controller: 'DashboardCtrl'
            })
            /*
             This is admin page?
             */
            .when('/user', { //Getting a list of all users in the system
                templateUrl: 'partials/user.html',
                controller: 'UserCtrl'
            })
            .when('/logout', {
                templateUrl: 'partials/logout.html',
                controller: 'LogoutCtrl'
            })/* - Should this be a separate page with oen URL?
         .when('/user/:userId/project/:projectId/:lookupUserId', {
         templateUrl: 'partials/user-detail.html',
         controller: 'UserCtrl'
         })*/
            .when('/user/:userId/project/:projectId/ranking', {
                templateUrl: 'partials/ranking.html',
                controller: 'RankingCtrl'
            })
            .when('/user/:userId/project/:projectId/manageusers', {
                templateUrl: 'partials/manageUsers.html',
                controller: 'ManageUsersCtrl'
            })
            .when('/user/:userId/project/:projectId/manageproject', {
                templateUrl: 'partials/manageProject.html',
                controller: 'ProjectCtrl'
            })
            .when('/user/:userId/project/:projectId', { // Show project dashboard
                templateUrl: 'partials/projectDashboard.html',
                controller: 'UserCtrl'
            })
            .when('/user/:userId/project/:projectId/:taskId', { // Show task view
                templateUrl: 'partials/task.html',
                controller: 'TaskCtrl'
            })
            .when('/user/:userId/project/:projectId/userDetail/:lookupUserId', {
                templateUrl: 'partials/user-detail.html',
                controller: 'UserDetailsCtrl'
            })
            .when('/user/:userId/cpanel', {
                templateUrl: 'partials/cpanel.html',
                controller: 'UserCtrl'
            })
            .when('/user/:userId', {
                templateUrl: 'partials/user.html',
                controller: 'EditUserCtrl'
            })
            .when('/user/:userId/projectUsers', {
                templateUrl: 'partials/manageUsers.html',
                controller: 'UserCtrl'
            })
            .otherwise({
                templateUrl: '../partials/404.html',
                controller: 'NotFoundCtrl'
            });
    }

]);


  
  
  
  