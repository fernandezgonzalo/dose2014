'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', '$resource', 'Utility', 'User', function ($scope, $log, $location, $routeParams, $resource, Utility, User) {
  $log.debug('UserController::init');

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

  $scope.create = function() {
    var user = $scope.user;
    if (!user) {
      user = {};
    }
    $log.debug('UserController::', user);
    user.isAdmin = '0';
    Utility.toUnderscore(user);
    var newUser = new User(user);
    newUser.$save(function() {
      $location.path('/login');
    }, function() {
      $scope.createUserError = true;
    });
  };
}]);