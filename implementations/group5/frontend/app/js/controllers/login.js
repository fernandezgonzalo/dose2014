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
      var promise = AuthService.login($scope.credentials);
      promise.then(function(user) {
        if (!user) {
          $scope.wrongCredentials = true;
        } else {
          $scope.setCurrentUser(user);
          $location.path('/');
        }
      });
    }
  };

  $scope.clearWrongCredentials = function() {
    $scope.wrongCredentials = false;
  };

}]);