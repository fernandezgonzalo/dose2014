'use strict';

angular.module('Mgmt').controller('UserController', ['$scope', '$log', '$location', '$routeParams', '$resource', 'Utility', 'User', 'ngToast', 'FileUpload',
      function ($scope, $log, $location, $routeParams, $resource, Utility, User, ngToast, FileUpload) {
  var TAG = 'UserController::';

  $scope.userSaved = false;

  $log.debug(TAG, 'init', $routeParams);
  if ($routeParams.id) {
    $scope.isEdit = true;
    User.get({userId  : $routeParams.id}, function(user) {
      Utility.toCamel(user);
      $scope.user = user;
      $log.debug(TAG, user);
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

  $scope.submit = function() {
    if ($scope.isEdit) {
      save();
    } else {
      create();
    }
  };

  function save() {
    $('#save_button').button('loading');
    if ($scope.form.$valid) {
      var user = $scope.user;
      if (!user.newPassword) {
        user.newPassword = '';
      }
      Utility.toUnderscore(user);
      user.$update(function() {
        $('#save_button').button('reset');
        ngToast.create({
          content: 'User was updated!',
          class: 'success'
        });
        Utility.toCamel($scope.user);
      }, function() {
        $('#save_button').button('reset');
        ngToast.create({
          content: 'Error updating the user!',
          class: 'danger'
        });
      });
    }

  }

  var emptyUser = {
    id: '',
    name: '',
    username: '',
    email: '',
    isAdmin: '',
    password: '',
    passwordConfirm: ''
  };

  function create() {
    $('#create_button').button('loading');
    var user = $scope.user;
    if ($scope.form.$valid) {
      user.isAdmin = '0';
      Utility.toUnderscore(user);
      var newUser = new User(user);
      newUser.$save(function() {
        $('#create_button').button('reset');
        ngToast.create({
          content: 'User was created!',
          class: 'success'
        });
        if (!$scope.currentUser) {
          $location.path('/login');
        } else {
          Utility.toUnderscore(emptyUser);
          angular.extend($scope.user, emptyUser);
          $scope.form.$setPristine(true);
          $('#username').focus();
        }
        
      }, function() {
        $('#create_button').button('reset');
        ngToast.create({
          content: 'Create user error!',
          class: 'danger'
        });
      });
    }
  }

  $scope.uploadFile = function() {
    $('#upload_button').button('loading');
    var file = $scope.myFile;
    $log.debug(TAG, 'myfile: ', file);
    var url = '/api/users/' + $scope.user.id + '/avatar';
    FileUpload.uploadFileToUrl(file, url, function() {
      $('#upload_button').button('reset');
      ngToast.create({
        content: 'Avatar was uploaded!',
        class: 'success'
      });
    }, function() {
      $('#upload_button').button('reset');
      ngToast.create({
        content: 'Upload image error!',
        class: 'danger'
      });
    });
  };

}]);