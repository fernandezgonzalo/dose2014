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

  $scope.isActive = function(path) {
    var link_path = path.split('/');
    var location_path = $location.path().split('/');
    if (link_path.length != location_path.length) {
      return false;
    }
    for (var i = 0; i < link_path.length; ++i) {
      if (link_path[i] !== '*' && link_path[i] !== location_path[i]) {
        $log.debug('ApplicationController::isActive::', link_path[i], location_path[i]);
        return false;
      }
    }
    return true;
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