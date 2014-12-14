/**
 * Created by ludste on 30/11/14.
 */
angular.module('DOSEMS.services').factory('Requirements', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/requirements/:requirementsId');

});

angular.module('DOSEMS.services').factory('RequirementsFactory', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/requirements/:requirementId', {}, {
		add: { method: 'post', params: { userId: '@userId', projectId: '@projectId', requirementId: '', desc: '@name', id_project: '@projectId', estimation: 0 }},
		query: { method: 'get', params: { userId: '@userId', projectId: '@projectId', requirementId: ''}, isArray: true },
		get: { method: 'get', params: { userId: '@userId', projectId: '@projectId', requirementId: '@requirementId'}, isArray: true },
		update: { method: 'put', params: { userId: '@userId', projectId: '@projectId', requirementId: '@requirementId', id_requirement: '@requirementId', estimation: '@estimation', id_project: '@projectId' }},
		remove: { method: 'delete' }
	});
});