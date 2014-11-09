'use strict';

angular.module('Mgmt').controller('ApplicationController', ['$scope', 'AuthService', function($scope, AuthService) {
  $scope.currentUser = null;
  $scope.isAuthenticated = AuthService.isAuthenticated;
  $scope.isAdmin = AuthService.isAdmin;

  $scope.setCurrentUser = function(user) {
    $scope.currentUser = user;
  };

}]);