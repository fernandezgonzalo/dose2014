'use strict';

//Projects service used for projects REST endpoint
angular.module('coffee.core').factory('Projects', ['CoffeeRestangular', function(CoffeeRestangular) {
	return CoffeeRestangular.service('projects');
}]);