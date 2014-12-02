angular.module('DOSEMS.services', ['ngResource']).factory('Users', function ($resource) {
    Users = {
        loggedIn: false,
        currentUser: {},
        resource: $resource("api/users/:userId", {}, {get: {method: 'get', isArray: true}}
        ),
        restUser: function () {
            this.loggedIn = false;
            this.loggedInUserId = -1;
            this.currentUser = {};

        }
    };

    return Users;
})
;