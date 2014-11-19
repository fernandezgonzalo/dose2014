'use strict';

angular.module('Mgmt').factory('User', ['$resource', '$http', '$log', function($resource, $http, $log) {  

  var TAG = 'UserService::';

  $log.debug(TAG, 'init');

  var User = $resource('/api/users/:userId', {userId: '@id'});

  User.prototype.$update = function(success, error) {
    $http.put('/api/users/' + this.id, this).then(success, error);
  };

  return User;

}]);