'use strict';

// Restangular service
angular.module('coffee.core').factory('CoffeeRestangular', ['Restangular', function(Restangular) {
  return Restangular.withConfig(function(RestangularConfigurer) {
    RestangularConfigurer.setBaseUrl('http://localhost:1337');
    //RestangularConfigurer.setBaseUrl('http://localhost:9090/coffee/');
  });
}]);