'use strict';

angular.module('Mgmt').factory('Project', ['$resource', function($resource) {  

  return $resource('/api/projects/:projectId', {projectId: '@id'},
                   {
                     'update': {method: 'PUT'}
                   });

}]);

