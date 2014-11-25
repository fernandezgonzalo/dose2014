'use strict';

angular.module('Mgmt').controller('ApplicationController', ['$scope', '$log', '$location', 'AuthService', function($scope, $log, $location, AuthService) {

  $scope.onloadListeners = [];

  var TAG = 'ApplicationController::';
  $log.debug(TAG, 'init main controller');

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
    var linkPath = path.split('/');
    var locationPath = $location.path().split('/');
    if (linkPath.length !== locationPath.length) {
      return false;
    }
    for (var i = 0; i < linkPath.length; ++i) {
      if (linkPath[i] !== '*' && linkPath[i] !== locationPath[i]) {
        return false;
      }
    }
    return true;
  };

  $scope.isAdmin = function() {
    return AuthService.isAdmin();
  };

  // Frontend authentication :)
  if (!AuthService.isAuthenticated()) {
    $location.path('/login');
  } else {
    if ($scope.currentUser === null) {
      var email = localStorage.getItem('email');
      var password = localStorage.getItem('password');
      var callback = function(user) {
        if (user) {
          $scope.setCurrentUser(user);
          $log.debug(TAG, 'onloadListeners: ', $scope.onloadListeners);
          for (var i in $scope.onloadListeners) {
            $scope.onloadListeners[i]();
          }
        } else {
          $location.path('/login');
        }
      };
      AuthService.login({email: email, password: password}, callback);
    }
  }

}]);