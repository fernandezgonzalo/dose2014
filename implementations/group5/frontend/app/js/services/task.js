'use strict';

angular.module('Mgmt').factory('Task', ['$resource', '$log', function($resource, $log) {  

  var TAG = 'TaskService::';

  $log.debug(TAG, 'init');

  var TasksByUserId = $resource('/api/users/:userId/tasks', {userId: '@id'});

  return TasksByUserId;

}]);