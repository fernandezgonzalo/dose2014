'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', 'User', function ($scope, $log, $location, User) {

  $scope.users = User.query();

  $scope.openProfile = function() {
    $location.path('/users/1');
  };

}]);
