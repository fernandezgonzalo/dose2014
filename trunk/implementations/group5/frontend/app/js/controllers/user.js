'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', '$resource', 'Utility', 'User', function ($scope, $log, $location, $routeParams, $resource, Utility, User) {
  var TAG = 'UserController::';

  $log.debug(TAG, 'init', $routeParams);
  if ($routeParams.id) {
    $scope.isEdit = true;
    User.get({userId  : $routeParams.id}, function(user) {
      $scope.user = user;
      user.password = '';
    });
  }

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