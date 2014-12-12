angular.module('DOSEMS.services').factory('TasksFromSprint', function ($resource) {
    return $resource('/api/users/:userId/projects/:projectId/sprints/:sprintId/tasks');

});