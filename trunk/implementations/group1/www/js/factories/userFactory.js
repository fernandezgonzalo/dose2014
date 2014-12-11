angular.module('DOSEMS.services', ['ngResource', 'ngCookies']).factory('Users', function ($resource) {
    Users = {
        loggedIn: false,
        currentUser: {},
        resource: $resource("api/users/:userId", null,
            {
                'update': {method: 'PUT'}
            }
        ),
        restUser: function () {
            this.loggedIn = false;
            this.currentUser = {};

        }
    };

    return Users;
})
;
angular.module('DOSEMS.services').factory('RegisteredUsers', function ($resource) {
    return $resource('api/users', {}, {get: {method: 'get', isArray: true}});
});
angular.module('DOSEMS.services').factory('UserDetails', function ($resource) {
    return $resource('api/users/:userId', {}, {get: {method: 'get', isArray: true}});
});
angular.module('DOSEMS.services').factory('UserRole', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/role', {}, {get: {method: 'get', isArray: true}});
});