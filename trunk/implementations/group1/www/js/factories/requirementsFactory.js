/**
 * Created by ludste on 30/11/14.
 */
angular.module('DOSEMS.services').factory('Requirements', function ($resource) {
    return $resource('api/users/:userId/projects/:projectId/requirements/:requirementsId');

});