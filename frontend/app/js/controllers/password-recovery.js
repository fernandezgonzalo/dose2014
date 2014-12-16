'use strict';

angular.module('Mgmt').controller('PasswordRecoveryController', ['$log', '$scope', '$http', 'ngToast', function($log, $scope, $http, ngToast) {

  $scope.submit = function() {
    if ($scope.form.$valid) {
      $('#pass_recovery_button').button('loading');
      $http.post('/api/password_recovery', {'user': $scope.user}).then(function() {
        ngToast.create('Administrators were notified!<br /> You will be contacted soon through your registered email.');
        $('#pass_recovery_button').button('reset');
      }, function() {
        ngToast.create({
          content: 'Some error occured!',
          class: 'danger'
        });
        $('#pass_recovery_button').button('reset');
      });
    }
    
  };

}]);