'use strict';

// var app = angular.module('Mgmt').controller('ProjectsController', ['Project', function(project) {}]);

// angular.module('Mgmt').controller('ProjectsController',
//                                   ['$scope', '$log', '$location', 'project',
//                                     function ($scope, $log, $location, project) {
                                      
angular.module('Mgmt').controller('ProjectsController',
                                  ['$scope', '$log', '$location', 'User',
                                    function ($scope, $log, $location, User) {

  $scope.users = User.query();

  $scope.openProject = function() {
    $location.path('/projects/1/dashboard');
  };
  
  $scope.login = function() {

  };

  // JavaScript object in order to ilustrate the template of /projects.html
  this.inProgress = [
    {
      name: 'Distributed software development system',
      client: 'DOSE 2014',
      author: 'Martin',
      date: 'Dec 15'
    },
    {
      name: 'New webmail application',
      client: 'Google',
      author: 'Larry',
      date: 'Jan 15'
    },
    {
      name: 'Control software for spaceships',
      client: 'Science Imp.',
      author: 'Richard',
      date: 'Feb 22'
    }];

  this.finished = [
    {
      name: 'Grammar recognizer',
      client: 'Science Imp.',
      author: 'Alan',
      date: 'Oct 31'
    },
    {
      name: 'Shopping mobile app development',
      client: 'Amazon',
      author: 'Jeff',
      date: 'Aug 13'
    }];
}]);

