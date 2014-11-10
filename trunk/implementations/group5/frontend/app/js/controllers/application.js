'use strict';

angular.module('Mgmt').controller('ApplicationController', ['$scope', '$log', '$location', 'AuthService', function($scope, $log, $location, AuthService) {
  $log.debug('ApplicationController::init main controller');
  $scope.currentUser = null;
  $scope.isAuthenticated = AuthService.isAuthenticated;
  $scope.isAdmin = AuthService.isAdmin;

  $scope.setCurrentUser = function(user) {
    $scope.currentUser = user;
  };

  $scope.logout = function() {
    AuthService.logout();
    location.href = '/';
  };

  if (!AuthService.isAuthenticated()) {
    $location.path('/login');
  } else {
    if ($scope.currentUser === null) {
      var email = localStorage.getItem('email');
      var user = AuthService.login({email: email});
      $scope.setCurrentUser(user);
    }
  }

}]);