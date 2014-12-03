angular.module('DOSEMS.services').factory('Projects', ['$resource', '$cookieStore', function ($resource, $cookieStore) {
    if ($cookieStore.get('loggedIn')) {
        return $resource('api/users/' + $cookieStore.get('userId') + '/projects/:projectId', {}, {
                get: {
                    method: 'get',
                    isArray: true
                }
            }
        );
    }
}]);