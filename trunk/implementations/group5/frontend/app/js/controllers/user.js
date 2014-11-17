'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', '$resource', function ($scope, $log, $location, $routeParams, $resource) {
  $log.debug('UserController::init');

  var User = $resource('/api/users/:userId', {userId: '@id'});

  $scope.users = User.query();

  $scope.openProfile = function(user) {
    $location.path('/users/' + user.id);
  };

  $scope.delete = function($event, user) {
    $log.debug('UserController::delete ', user);
    user.$delete();
    $event.stopPropagation();

  };
  $scope.openProjectDash = function($event) {
    $location.path('/projects/1/dashboard');
    $event.stopPropagation();
  };

  $scope.create = function(user) {
    $log.debug('UserController::', user);
    user['is_admin'] = '0';
    var newUser = new User(user);
    newUser.$save();
  };

}]);
