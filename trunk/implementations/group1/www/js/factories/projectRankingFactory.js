	angular.module('DOSEMS.services').factory('ProjectRanking', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/ranking', {}, {get: {method: 'get', isArray: true}});
});