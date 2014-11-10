'use strict';

angular.module('Mgmt').controller('LoginController', ['$scope', '$location', '$log', 'AuthService', 
    function($scope, $location, $log, AuthService) {

  $scope.credentials = {
    email: '',
    password: ''
  };

  $scope.login = function(credentials) {
    var user = AuthService.login(credentials);
    $scope.setCurrentUser(user);
    $location.path('/');
  };

}]);