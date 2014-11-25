'use strict';

angular.module('Mgmt').factory('Task', ['$resource', '$log', function($resource, $log) {  

  var TAG = 'Task::';
  $log.debug(TAG, 'init');

  var Task = $resource('/api/tasks/:taskId', {taskId: '@id'}, {'update':   {method: 'PUT'}});
  
  return Task;

}]);