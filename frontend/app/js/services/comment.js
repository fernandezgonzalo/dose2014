'use strict';

angular.module('Mgmt').factory('Comment', ['$resource', '$log', function($resource, $log) {  

  var TAG = 'Comment::';
  $log.debug(TAG, 'init');

  var Comment = $resource('/api/tasks/:taskId/comments/:commentId', {taskId: '@id_task', commentId: '@id'}, {
                     'update':   {method: 'PUT'}
                   });

  return Comment;

}]);