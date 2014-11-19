'use strict';

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log',
                   '$location', '$routeParams', 'Project',
                   function ($scope, $log, $location, $routeParams, Project) {

  $log.debug('ProjectsController::init');

  $scope.projects = Project.query();
  
  $scope.openProject = function(project) {
    $location.path('/projects/' + project.id + '/dashboard');
  };
  
  $scope.createProject = function(project) {
    $log.log('createProject is being called');
    $log.info(project);
    if(!project) {
      $log.log('Not even trying to save project.');
      return;
    }
    var newProject = new Project(project);
    // newProject.$save(function() {
    //   $log.log('Project created successfully.');
    //   $location.path('/projects');
    // }, function() {
    //   $log.log('Project couldn\'t be created.');
    //   $scope.createProjectError = true;
    // });
    $log.info(newProject);
    newProject.$save();
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
      name: 'Shopping mobile app development',
      client: 'Amazon',
      author: 'Jeff',
      date: 'Aug 13'
    }];
}]);

