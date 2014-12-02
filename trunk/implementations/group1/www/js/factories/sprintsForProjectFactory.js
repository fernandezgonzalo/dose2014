angular.module('DOSEMS.services').factory('SprintsForProject', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/sprints',{}, {get: {method: 'get', isArray: true}});

});