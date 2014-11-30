angular.module('DOSEMS.factory', ['ngResource']).factory('UserFactory', function ($resource) {
    return $resource("api/users/:userId", {}, {get: {method: 'get', isArray: true}});
});