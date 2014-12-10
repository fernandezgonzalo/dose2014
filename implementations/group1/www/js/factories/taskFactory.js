/**
 * Created by ludste on 30/11/14.
 */
angular.module('DOSEMS.services').factory('Tasks', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/sprints/:sprintId/tasks/:tasksId',{},{
	
	update : {method: 'put'}
	});

});