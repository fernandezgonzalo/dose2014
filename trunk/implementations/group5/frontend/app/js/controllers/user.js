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

  var imageValidation = function(file, callback) {
    if (!file) {
      ngToast.create({
        content: 'File is absent!',
        class: 'danger'
      });
      callback(false);
      return;
    }
    $log.debug(TAG, 'onImageSelected', file);
    var reader = new FileReader();
    var image  = new Image();
    reader.readAsDataURL(file);  
    reader.onload = function(_file) {
      image.src = _file.target.result;              // url.createObjectURL(file);
      image.onload = function() {
        if (this.width < 100 || this.height < 100) {
          ngToast.create({
            content: 'Minimal dimension of the image is 100x100 pixels!',
            class: 'danger'
          });
          callback(false);     
          return;
        } else if (this.size / 1024 / 1024 > 3) {
          ngToast.create({
            content: 'Image is too big! Max size is 3mb!',
            class: 'danger'
          });
          callback(false);
          return;
        } else if (this.width !== this.height) {
          ngToast.create({
            content: 'Image is not squared! It will be truncated!',
            class: 'warning'
          });
        }
        callback(true);
      };
      image.onerror= function() {
          ngToast.create({
            content: 'Invalild image!',
            class: 'danger'
          });
          callback(false);
      };      
    };
  };

  $scope.uploadFile = function() {
    var file = $scope.myFile;
    imageValidation(file, function(isValid) {
      $scope.$apply();
      if (isValid) {
        $('#upload_button').button('loading');
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
      }
    });
  };

}]);