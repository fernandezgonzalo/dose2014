'use strict';

angular.module('Mgmt').factory('User', ['$resource', function($resource) {  

  var User = $resource('/api/users/:userId', {userId: '@id'});
  return User;

}]);