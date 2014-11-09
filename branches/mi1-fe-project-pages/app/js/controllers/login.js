'use strict';

angular.module('Mgmt').controller('LoginController', ['$scope', '$location', '$log', function($scope, $location, $log) {
  $scope.user = { email: '', password: '' };
  $scope.wrongCredentials = false;

  $scope.login = function() {
    if (true) {
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