'use strict';

angular.module('Mgmt').factory('Task', ['$resource', '$log', '$http', function($resource, $log, $http) {  

  var TAG = 'Task::';
  var Task = $resource('/api/tasks/:taskId', {taskId: '@id'});

  Task.prototype.$update = function(success, error) {
  	$http.put('/api/tasks/' + this.id, this).then(success, error);
  }

  $log.debug(TAG, 'init');

  return Task;

}]);