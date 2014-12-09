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