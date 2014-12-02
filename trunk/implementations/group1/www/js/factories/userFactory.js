angular.module('DOSEMS.services', ['ngResource']).factory('Users', function ($resource) {
    Users = {
        loggedIn: false,
        /*
         loggedInUserId: -1,
         */
        currentUser: {},
        resource: $resource("api/users/:userId",
            {},
            {
                get: {method: 'get', isArray: true}
                /*getCurrentUser: {
                 method: 'get', params: {
                 userId: function () {
                 if (loggedIn) {
                 return loggedInUserId;
                 } else {
                 return -1;
                 }

                 }
                 }
                 }*/


            }
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