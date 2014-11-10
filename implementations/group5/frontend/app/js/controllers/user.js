'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', 'User', function ($scope, $log, $location, $routeParams, User) {

  $log.debug('UserController::routeParams=', $routeParams);

  $scope.users = User.query();

  $scope.openProfile = function() {
    $location.path('/users/1');
  };

}]);
