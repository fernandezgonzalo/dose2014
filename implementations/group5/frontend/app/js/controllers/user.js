'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', '$resource', 'Utility', 'User', function ($scope, $log, $location, $routeParams, $resource, Utility, User) {
  var TAG = 'UserController::';

  $scope.userSaved = false;

  $log.debug(TAG, 'init', $routeParams);
  if ($routeParams.id) {
    $scope.isEdit = true;
    User.get({userId  : $routeParams.id}, function(user) {
      $scope.user = user;
      user.password = '';
    });
  }

  $scope.users = User.query();

  $scope.openProfile = function(user) {
    $location.path('/users/' + user.id);
  };

  $scope.delete = function($event, user) {
    var row = $(event.currentTarget).closest('tr');
    user.$delete(function() {
      row.remove();
    });
    
    $event.stopPropagation();
  };
  $scope.openProjectDash = function($event) {
    $location.path('/projects/1/dashboard');
    $event.stopPropagation();
  };

  $scope.submit = function() {
    if ($scope.isEdit) {
      save();
    } else {
      create();
    }
  };

  function animate() {
    $scope.saveSucceed = true;
    setTimeout(function() {
      $scope.hiding = true;
      $scope.$apply();
      setTimeout(function() {
        $scope.saveSucceed = false;
        $scope.hiding = false;
        $scope.$apply();
      }, 3000);
    }, 7000);
  }

  $scope.hide = function() {
    $scope.showSuccess = false;
  };

  function save() {
    var user = $scope.user;
    user.$update(function() {
      animate();
    }, function() {
      $scope.saveUserError = true;
    });
  }

  function create() {
    var user = $scope.user;
    if ($scope.form.$valid) {
      user.isAdmin = '0';
      Utility.toUnderscore(user);
      var newUser = new User(user);
      newUser.$save(function() {
        $location.path('/login');
      }, function() {
        $scope.createUserError = true;
      });
    }
  }
}]);