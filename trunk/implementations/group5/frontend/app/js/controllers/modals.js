'use strict';

angular.module('Mgmt')
       .controller('newModalController',
                   function($log, $scope, $modalInstance, createProject) {

         $log.debug('newModalController::init');
         
         $scope.createProject = function(project) {
           createProject(project);
           $modalInstance.close();
         };

         $scope.cancel = function() {
           $modalInstance.dismiss('cancel');
         };

       })
       .controller('editModalController',
                   function($log, $scope, $modalInstance, project,
                            updateProject, deleteProject) {

         $log.debug('editModalController::init');

         // Clone 'project' object to decouple it from ProjectsController.
         $scope.project = JSON.parse(JSON.stringify(project));

         $scope.updateProject = function(project) {
           updateProject(project);
           $modalInstance.close();
         };

         $scope.deleteProject = function(project) {
           deleteProject(project);
           $modalInstance.close();
         };

         $scope.cancel = function() {
           $modalInstance.dismiss('cancel');
         };

       });
