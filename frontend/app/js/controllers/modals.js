'use strict';

angular.module('Mgmt')
       .controller('NewModalController', ['$log', '$scope', 'Datepicker',
                   '$modalInstance', 'createProject',
                   function($log, $scope, Datepicker, $modalInstance,
                            createProject) {

         $log.debug('NewModalController::init');
         
         Datepicker.set($scope);

         $scope.createProject = function(project) {
           createProject(project);
           $modalInstance.close();
         };

         $scope.cancel = function() {
           $modalInstance.dismiss('cancel');
         };

       }])
       .controller('EditModalController', ['$log', '$scope', 'Datepicker',
                   '$modalInstance', 'project', 'updateProject', 'deleteProject',
                   function($log, $scope, Datepicker, $modalInstance, project,
                            updateProject, deleteProject) {

         $log.debug('EditModalController::init');

         Datepicker.set($scope);

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

       }]);
