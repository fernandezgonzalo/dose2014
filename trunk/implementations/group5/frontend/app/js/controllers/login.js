'use strict';

angular.module('Mgmt').controller('LoginController', ['$scope', '$location', '$log', 'AuthService', 'ngToast', 
    function($scope, $location, $log, AuthService, ngToast) {

  var TAG = 'LoginController::';

  $log.debug(TAG, 'init');

  $scope.credentials = {
    email: '',
    password: ''
  };

  $scope.login = function() {
    if ($scope.loginForm.$valid) {
      AuthService.login($scope.credentials).then(function(user) {
        $('#login_button').button('reset');
        $scope.setCurrentUser(user);
        $location.path('/');
        $scope.$apply();
      }, function(response) {
        ngToast.create({
          content: response.data.Message,
          class: 'danger'
        });
        $scope.$apply();
      });
    }
  };

}]);
