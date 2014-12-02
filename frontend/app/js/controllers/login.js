'use strict';

angular.module('Mgmt').controller('LoginController', ['$scope', '$location', '$log', 'AuthService', 'ngToast', 
    function($scope, $location, $log, AuthService, ngToast) {

  var TAG = 'LoginController::';
  var FLAG = 'correctCredentials';

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
        if (response.data.Message) {
          ngToast.create({
            content: response.data.Message,
            class: 'danger'
          });
          $scope.$apply(function() {
            $scope.loginForm.email.$setValidity(FLAG, false);
            $scope.loginForm.password.$setValidity(FLAG, false);
          });
        } else {
          ngToast.create({
            content: 'Unknow error occured',
            class: 'danger'
          });
        }
      });
    }
  };

  $scope.changed = function() {
    $scope.loginForm.email.$setValidity(FLAG, true);
    $scope.loginForm.password.$setValidity(FLAG, true);
  };

}]);
