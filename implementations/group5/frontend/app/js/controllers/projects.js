'use strict';

// angular.module('Mgmt')
//        .controller('ProjectsController', ['$scope', '$log', '$location',
//                    '$routeParams', '$resource', 'Project',
//                    function ($scope, $log, $location, $routeParams, $resource, Project) {
                                      
// angular.module('Mgmt')
//        .controller('ProjectsController', ['$scope', '$log',
//                    '$location', '$routeParams', 'Project',
//                    function ($scope, $log, $location, $routeParams, Project) {

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log',
                   '$location', '$routeParams',
                   function ($scope, $log, $location, $routeParams) {

  $log.debug('ProjectsController::init');

  // $scope.projects = Project.query();
  
  $scope.openProject = function(project) {
    $location.path('/projects/' + project.id + '/dashboard');
  };
  
  // JavaScript object in order to ilustrate the template of /projects.html
  $scope.inProgress = [
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

  $scope.finished = [
    {
      id: 1,
      name: 'Grammar recognizer',
      client: 'Science Imp.',
      author: 'Alan',
      date: 'Oct 31'
    },
    {
      id: 2,
      name: 'Grammar recognizer',
      client: 'Science Imp.',
      author: 'Alan',
      date: 'Oct 31'
    },
    {
      id: 3,
      name: 'Shopping mobile app development',
      client: 'Amazon',
      author: 'Jeff',
      date: 'Aug 13'
    }];
}]);

