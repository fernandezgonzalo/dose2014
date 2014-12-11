'use strict';

angular.module('Mgmt').factory('Task', ['$resource', '$log', function($resource, $log) {  

  var TAG = 'Task::';
  $log.debug(TAG, 'init');

  return $resource('/api/tasks/:taskId', {taskId: '@id'},
                   {
                   	'update':          	{method: 'PUT'},
                   	'delete': 			{method: 'DELETE',
                   						params: {taskId: '@id', projectId: '@id_project'},
                   						url: '/api/tasks/:taskId'},
                    'getProjectTasks': 	{method: 'GET',
                                        params: {projectId: '@id_project'}, 
                                        url: '/api/projects/:projectId/tasks',
                                        isArray: true},
                    'getUserTasks': 	{method: 'GET',
                     					params: {userId: '@id_user_assigned'},
                     					url: '/api/users/:userId/tasks',
                     					isArray: true}
  });
  

}]);
