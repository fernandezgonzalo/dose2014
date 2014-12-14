angular.module('DOSEMS.services').factory('SprintsForProject', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/sprints',{}, {get: {method: 'get', isArray: true}});
});
angular.module('DOSEMS.services').factory('SprintsFactory', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/sprints/:sprintId', {}, {
		add: { method: 'post', params: { userId: '@userId', projectId: '@projectId', sprintId: '', duration: '@duration', id_project: '@projectId' }},
		query: { method: 'get', params: { userId: '@userId', projectId: '@projectId', sprintId: ''}, isArray: true },
		get: { method: 'get', params: { userId: '@userId', projectId: '@projectId', sprintId: '@sprintId'}, isArray: true },
		update: { method: 'put', params: { userId: '@userId', projectId: '@projectId', sprintId: '@sprintId', id_sprint: '@sprintId', duration: '@duration', id_project: '@projectId' }},
		remove: { method: 'delete' }
	});
});