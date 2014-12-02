'use strict';

angular.module('Mgmt').factory('User', ['$resource', '$http', '$log', function($resource, $http, $log) {  

  var TAG = 'UserService::';

  $log.debug(TAG, 'init');

  var User = $resource('/api/users/:userId', {userId: '@id'}, {
                         'update':   {method: 'PUT'}
  });

  User.prototype.$getTasks = function(success) {
  	$http.get('/api/users/' + this.id + '/tasks').then(success);
  };

  return User;

}]);