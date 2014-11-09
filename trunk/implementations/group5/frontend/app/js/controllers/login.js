'use strict';

angular.module('Mgmt').controller('LoginController', ['$scope', '$location', '$log', 'AuthService', function($scope, $location, $log, AuthService) {
  $scope.user = { email: '', password: '' };
  $scope.wrongCredentials = false;

  $scope.login = function() {
    if (AuthService.login()) {
      success();
    } else {
      error();
    }
  };

  var success = function(response) {
    $log.debug('success login', response);
    localStorage.setItem('auth_token', $scope.user.email);
    $location.path('/todos  ');
  };

  var error = function(response) {
    $log.debug('error during login', response);
    $scope.wrongCredentials = true;
  };
}]);