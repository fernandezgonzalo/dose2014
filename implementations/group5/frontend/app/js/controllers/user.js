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
  
  $scope.search = function(item) {
    var searchString = item.name + item.username + item.email;
    var needle = $scope.query || '';
    $scope.emptyFilter = false;
    if (needle) {
      if (searchString.indexOf(needle) === -1) {
        return false;
      }
    }
    $scope.emptyFilter = false;
    return true;
  };

  $scope.openProfile = function(user) {
    $location.path('/users/' + user.id);
  };

  var Revertable = function(target, user) {
      this.row = $(target).closest('tr');
      this.user = user;
  };
  
  Revertable.prototype = {
    constructor: Revertable,
    delete: function() {
      this.user.$delete(this.success.bind(this), this.error.bind(this));
    },
    success: function() {
      $log.debug(TAG, 'real deletion success');
      this.row.remove();
    },
    error: function() {
      ngToast.create({
        content: 'Error deleting the user!',
        class: 'danger'
      });
      this.undo();
    },
    do: function() {
      this.row.hide();
      this.msg = ngToast.create({
        'content': 'User "' + this.user.username + '" was deleted. <a href="#" class="user-' + this.user.id + '">Undo</span>',
        'timeout': 10000,
        'dismissButton': true,
        'dismissOnClick': false
      });
      this.deferredTask = setTimeout(this.delete.bind(this), 10000);
      var limit = 50;
      var setListener = function () {
        var span = $('.user-' + this.user.id);
        if (span.length) {
          span.bind('click', function() {
            this.undo();
            if (this.deferredTask) {
              clearTimeout(this.deferredTask);
            }
            return false;
          }.bind(this));
        } else if (limit > 0) {
          --limit;
          setTimeout(setListener, 500);
        }
      }.bind(this);
      setTimeout(setListener, 500);

    },
    undo: function() {
      this.row.show();
      ngToast.dismiss(this.msg);
      $scope.$apply();
    }
  };

  $scope.delete = function($event, user) {
    var revertable = new Revertable($event.currentTarget, user);
    revertable.do();    
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
    if ($scope.form.$valid) {
      $('#save_button').button('loading');
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
    var user = $scope.user;
    if ($scope.form.$valid) {
      $('#create_button').button('loading');
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