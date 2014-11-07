'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', 'User', function ($scope, $log, User) {

  $scope.users = User.query();
}]);
