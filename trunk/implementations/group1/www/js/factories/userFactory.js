angular.module('Demo.factory', ['ngResource']).factory('UserFactory', function ($resource) {
	var r = $resource('api/users');
	
  return r;
});