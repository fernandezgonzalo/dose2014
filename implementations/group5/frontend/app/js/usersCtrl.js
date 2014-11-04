'use strict';

angular.module('Demo').controller('UsersCtrl', function ($scope, $http, $log, $timeout, Users) {

  // the model that we bind to the input box
  $scope.newUser = {
    name: ''
  };

  $scope.successMsgVisible = false;

  // the function to add the new users
  $scope.addUser = function() {

    // the payload is simple the json object that we used for binding to the input
    var payload = $scope.newUser;
    var success = function() {
      // reset the todoModel to not have a description (we keep the last selected user)
      $scope.newUser.name = '';

      // show a success message
      $scope.successMsgVisible = true;
      // let the message dissapear after 2 secs
      $timeout(function() {$scope.successMsgVisible = false;}, 2000);
    };
    Users.create(payload, success);
  };

});
