'use strict';

angular.module('Mgmt').controller('ApplicationController', ['$scope', '$log', '$location', 'AuthService', function($scope, $log, $location, AuthService) {

  $scope.onloadListeners = [];

  var TAG = 'ApplicationController::';
  $log.debug(TAG, 'init');

  $scope.currentUser = null;
  $scope.isAuthenticated = AuthService.isAuthenticated;
  $scope.isAdmin = AuthService.isAdmin;

  $scope.setCurrentUser = function(user) {
    $scope.currentUser = user;
  };

  $scope.logout = function() {
    AuthService.logout();
    $location.path('/login');
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

  $scope.getCurrentUser = function() {
    return new Promise(function(resolve, reject) {
      if ($scope.currentUser) {
        resolve($scope.currentUser);
      } else if (AuthService.isAuthenticated()) {
        AuthService.getCurrentUser().then(function(user) {
          resolve(user);
        }, function() {
          reject();
          $location.path('/login');
        });
      } else {
        $location.path('/login');
      }
    });
  };

  $scope.getCurrentUser().then(function(user) {
    $scope.setCurrentUser(user);
  });  

}]);