'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', '$resource', 'Utility', function ($scope, $log, $location, $routeParams, $resource, Utility) {
  $log.debug('UserController::init');

  var User = $resource('/api/users/:userId', {userId: '@id'});

  $scope.users = User.query();

  $scope.openProfile = function(user) {
    $location.path('/users/' + user.id);
  };

  $scope.delete = function($event, user) {
    var row = $(event.currentTarget).closest('tr');
    user.$delete(function() {
      row.remove();
    });
    
    $event.stopPropagation();
  };
  $scope.openProjectDash = function($event) {
    $location.path('/projects/1/dashboard');
    $event.stopPropagation();
  };

  $scope.create = function(user) {
    $log.debug('UserController::', user);
    user.isAdmin = '0';
    Utility.toUnderscore(user);
    var newUser = new User(user);
    newUser.$save();
  };
}]);
