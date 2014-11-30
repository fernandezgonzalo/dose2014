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
      $('#login_button').button('loading');
      var callback = function(user) {
        $('#login_button').button('reset');
        if (!user) {
          ngToast.create({
            content: 'Wrong credentials',
            class: 'danger'
          });
        } else {
          $scope.setCurrentUser(user);
          $location.path('/');
        }
      };
      AuthService.login($scope.credentials, callback);
    }
  };

}]);
