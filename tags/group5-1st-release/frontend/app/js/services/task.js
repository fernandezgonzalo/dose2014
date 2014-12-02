'use strict';

angular.module('Mgmt').factory('Task', ['$resource', '$log', function($resource, $log) {  

  var TAG = 'Task::';
  $log.debug(TAG, 'init');

  return $resource('/api/tasks/:taskId', {taskId: '@id'},
                   {
                     'update':          {method: 'PUT'},
                     'getProjectTasks': {method: 'GET',
                                         params: {projectId: '@id_project'}, 
                                         url: '/api/projects/:projectId/tasks',
                                         isArray: true}
                   });
  

}]);
