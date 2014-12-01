'use strict';

angular.module('Mgmt').controller('ApplicationController', ['$scope', '$log', '$location', 'AuthService', 'User', function($scope, $log, $location, AuthService, User) {

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

  if (!AuthService.isAuthenticated()) {
    $location.path('/login');
  } else {
    if ($scope.currentUser === null) {
      var userId = localStorage.getItem(AuthService.KEY);

      User.get({userId: userId}, function(user) {
        AuthService.loginSuccess(user);
        $scope.setCurrentUser(user);
        $log.debug(TAG, 'onloadListeners: ', $scope.onloadListeners);
        for (var i in $scope.onloadListeners) {
          $scope.onloadListeners[i]();
        }
      }, function() {
        $location.path('/login');
      });
    }
  }

}]);