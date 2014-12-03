angular.module('DOSEMS.services', ['ngResource', 'ngCookies']).factory('Users', function ($resource) {
    Users = {
        loggedIn: false,
        currentUser: {},
        resource: $resource("api/users/:userId", {}, {get: {method: 'get', isArray: true}}
        ),
        restUser: function () {
            this.loggedIn = false;
            this.currentUser = {};

        }
    };

    return Users;
})
;