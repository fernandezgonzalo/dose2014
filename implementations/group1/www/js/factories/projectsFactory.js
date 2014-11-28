angular.module('DOSEMS.factory').factory('UserFactory', function ($resource) {
  return $resource(
	  'api/users/:userId/projects/:projectId', //URL
	  {userId:'@userId', 
	  projectId:'@projectId'}//Default paramaters
);
});