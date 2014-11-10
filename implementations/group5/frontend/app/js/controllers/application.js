'use strict';

angular.module('Mgmt').controller('ApplicationController', ['$scope', '$log', '$location', 'AuthService', function($scope, $log, $location, AuthService) {
  $log.debug('ApplicationController: init main controller');
  $scope.currentUser = null;
  $scope.isAuthenticated = AuthService.isAuthenticated;
  $scope.isAdmin = AuthService.isAdmin;

  if (!AuthService.isAuthenticated()) {
    $location.path('/login');
  }

  $scope.setCurrentUser = function(user) {
    $scope.currentUser = user;
  };

  $scope.logout = function() {
    AuthService.logout();
    location.href = '/';
  };
}]);