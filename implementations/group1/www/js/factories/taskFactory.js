/**
 * Created by ludste on 30/11/14.
 */
angular.module('DOSEMS.services').factory('Tasks', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/sprints/:sprintId/tasks/:tasksId',{},{
	
	update : {method: 'put'}
	});

});

angular.module('DOSEMS.services').factory('SprintTasks', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/sprints/:sprintId/tasks',{},{
		get : {method: 'get', isArray: true}
	});
});

angular.module('DOSEMS.services').factory('TaskInfo', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/sprints/:sprintId/tasks/:taskId',{},{
		get : {method: 'get', isArray: true}
	});
});

angular.module('DOSEMS.services').factory('TasksFactory', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/sprints/:sprintId/tasks/:taskId', {}, {
		query: { method: 'get', params: { userId: '@userId', projectId: '@projectId', sprintId: '@sprintId', taskId: ''}, isArray: true },
		get: { method: 'get', isArray: true },
		update: { method: 'put', params: { 
			userId: '@userId', 
			projectId: '@projectId', 
			sprintId: '@sprintId', 
			taskId: '@taskId',
			id_task: '@id_task',
			desc: '@desc', 
			comment: '@comment', 
			duration: '@duration', 
			points: '@points', 
			status: '@status', 
			id_user: '@id_user', 
			id_requirement: '@id_requirement', 
			id_sprint: '@id_sprint'}},
	});
});