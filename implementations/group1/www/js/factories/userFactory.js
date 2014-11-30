angular.module('DOSEMS.services', ['ngResource']).factory('Users', function ($resource) {
    return $resource("api/users/:userId", {}, {get: {method: 'get', isArray: true}});
});