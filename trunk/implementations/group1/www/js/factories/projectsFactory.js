angular.module('DOSEMS.services').factory('Projects', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId', {}, {get: {method: 'get', isArray: true}});
});