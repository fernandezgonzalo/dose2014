'use strict';

angular.module('Mgmt').controller('LoginController', ['$scope', '$location', '$log', 'AuthService', 
    function($scope, $location, $log, AuthService) {

  var TAG = 'LoginController::';

  $log.debug(TAG, 'init');

  $scope.credentials = {
    email: '',
    password: ''
  };

  $scope.login = function() {
    if ($scope.loginForm.$valid) {
      var callback = function(user) {
        if (!user) {
          $scope.wrongCredentials = true;
        } else {
          $scope.setCurrentUser(user);
          $location.path('/');
        }
      };
      AuthService.login($scope.credentials, callback);

    }
  };

  $scope.clearWrongCredentials = function() {
    $scope.wrongCredentials = false;
  };

}]);