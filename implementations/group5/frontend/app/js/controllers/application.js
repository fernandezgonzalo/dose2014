'use strict';

angular.module('Mgmt').controller('ApplicationController', ['$scope', '$log', '$location', 'AuthService', '$q', function($scope, $log, $location, AuthService, $q) {

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
    var deferred = $q.defer();
    if ($scope.currentUser) {
      deferred.resolve($scope.currentUser);
    } else if (AuthService.isAuthenticated()) {
      AuthService.getCurrentUser().then(function(user) {
        deferred.resolve(user);
      }, function() {
        deferred.reject();
        $location.path('/login');
      });
    } else {
      $location.path('/login');
    }
    return deferred.promise;
  };

  $scope.getCurrentUser().then(function(user) {
    $scope.setCurrentUser(user);
  });  

}]);