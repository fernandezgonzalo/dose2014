angular.module('DOSEMS.services').factory('UsersFromProject', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/developers', {}, {get: {method: 'get', isArray: true}});
});
angular.module('DOSEMS.services').factory('RemoveUserFromProject', function ($resource) {
	return $resource('/api/users/:userId/projects/:projectId/developers/:developerId', {}, 
		{ 
			'remove': {method: 'DELETE'}
		}); 
});

