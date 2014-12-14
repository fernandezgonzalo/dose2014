angular.module('DOSEMS.services').factory('UsersFromProject', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/developers', {}, {get: {method: 'get', isArray: true}});
});
angular.module('DOSEMS.services').factory('RemoveUserFromProject', function ($resource) {
	return $resource('/api/users/:userId/projects/:projectId/developers/:developerId', {}, 
		{ 
			'remove': {method: 'DELETE'}
		}); 
});
angular.module('DOSEMS.services').factory('DevelopersFactory', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/developers/:developerId', {}, {
		add: { method: 'post', params: { userId: '@userId', projectId: '@projectId', developerId: '', role: '@role', id_project: '@projectId' }},
		query: { method: 'get', params: { userId: '@userId', projectId: '@projectId', developerId: ''}, isArray: true },		
		remove: { method: 'delete' }
	});
});
angular.module('DOSEMS.services').factory('RoleFactory', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/role', {}, {
		get: { method: 'get', params: {userId: '@userId', projectId: '@projectId'  }, isArray: true },
	});
});

