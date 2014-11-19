'use strict';

angular.module('Mgmt').factory('Project', ['$resource', function($resource) {  

  var Project = $resource('/api/projects/:projectId', {projectId: '@id'});
  return Project;

}]);

