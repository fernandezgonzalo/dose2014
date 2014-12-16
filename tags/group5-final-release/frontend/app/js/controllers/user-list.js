'use strict';

angular.module('Mgmt').controller('UserListController', ['$log', '$scope', 'User', '$location', 'ngToast', function($log, $scope, User, $location, ngToast) {
  var TAG = 'UserListController::';
  $log.debug(TAG, 'init');

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
    $delete: function() {
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
    action: function() {
      this.row.hide();
      this.msg = ngToast.create({
        'content': 'User "' + this.user.username + '" was deleted. <a href="#" class="user-' + this.user.id + '">Undo</span>',
        'timeout': 10000,
        'dismissButton': true,
        'dismissOnClick': false
      });
      this.deferredTask = setTimeout(this.$delete.bind(this), 10000);
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

  $scope.deleteUser = function($event, user) {
    var revertable = new Revertable($event.currentTarget, user);
    revertable.action(); // rename do to action, because do is reserved keyword    
    $event.stopPropagation();
  };

}]);