'use strict';

angular.module('Mgmt').factory('Task', ['$resource', '$log', function($resource, $log) {  

  var TAG = 'Task::';
  var Task = $resource('/api/tasks/:taskId', {taskId: '@id'});

  $log.debug(TAG, 'init');

  return Task;

}]);