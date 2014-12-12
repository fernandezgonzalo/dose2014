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