	angular.module('DOSEMS.services').factory('UsersFromProject', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/developers', {}, {get: {method: 'get', isArray: true}});
});