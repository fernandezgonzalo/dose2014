'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', 'User', function ($scope, $log, $location, $routeParams, User) {
  $log.debug('UserController::routeParams=', $routeParams);


  $scope.users = User.query();

  $scope.openProfile = function(user) {
    $location.path('/users/' + user.id);
  };

  $scope.delete = function($event, user) {
    $log.debug('UserController::delete ', user);
    $event.stopPropagation();

  };
  $scope.openProjectDash = function($event) {
    $location.path('/projects/1/dashboard');
    $event.stopPropagation();
  };

  $scope.create = function(user) {
    $log.debug('UserController::', user);
    User.add(user);
  };

}]);
