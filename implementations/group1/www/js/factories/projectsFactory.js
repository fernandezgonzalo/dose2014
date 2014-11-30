angular.module('DOSEMS.factory').factory('ProjectFactory', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId', {}, {get: {method: 'get', isArray: true}});
});