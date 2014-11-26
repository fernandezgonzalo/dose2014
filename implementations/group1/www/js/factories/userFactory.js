angular.module('DOSEMS.factory', ['ngResource']).factory('UserFactory', function ($resource) {
  return $resource(
	  'api/users/:userId', //URL
	  {userId:'@id'}		//Default paramaters
);
});