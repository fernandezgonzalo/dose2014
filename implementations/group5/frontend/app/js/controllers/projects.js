'use strict';

angular.module('Mgmt')
       .controller('ProjectsController', ['$scope', '$log',
                   '$location', '$routeParams', 'Utility', 'Project',
                   function ($scope, $log, $location, $routeParams, Utility, Project) {

  $log.debug('ProjectsController::init');

  $scope.projects = Project.query();
  
  $scope.openProject = function(project) {
    $location.path('/projects/' + project.id + '/dashboard');
  };
  
  $scope.createProject = function(project) {
    if(!project) {
      $log.error('"project" object does not exist.');
      return;
    }
    var newProject = new Project(project);
    // Asign user_id property to the project to be created.
    newProject.idUser = $scope.currentUser.id;
    // Change from camelCase to underscore case to send to backend DB.
    Utility.toUnderscore(newProject);
    $log.info(newProject);
    newProject.$save(function() {
      $log.log('Project created successfully.');
      $location.path('/projects');
    }, function() {
      $log.log('There was an error upon project creation.');
      $scope.createProjectError = true;
    });
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

