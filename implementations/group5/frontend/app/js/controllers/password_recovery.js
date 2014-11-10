'use strict';

angular.module('Mgmt').controller('PasswordRecoveryController', ['$log', '$scope', function($log, $scope) {

  $scope.email = '';

  $scope.submit = function(email) {
    $log.debug('PasswordRecoveryController::submit', email);
  };

}]);