'use strict';

angular.module('Mgmt').controller('LoginController', ['$scope', '$location', '$log', 'AuthService', 
    function($scope, $location, $log, AuthService) {

  $scope.credentials = {};

  $scope.login = function(credentials) {
    AuthService.login(credentials);
    $location.path('/');
  };

}]);