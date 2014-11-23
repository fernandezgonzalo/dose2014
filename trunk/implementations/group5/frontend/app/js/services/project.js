'use strict';

angular.module('Mgmt').factory('Project', ['$resource', function($resource) {  

  return $resource('/api/projects/:projectId', {projectId: '@id'},
                   {
                     'update':   {method: 'PUT'},
                     'getTasks': {method: 'GET',
                                  url: '/api/projects/:projectId/tasks',
                                  isArray: true}
                   });
}]);

