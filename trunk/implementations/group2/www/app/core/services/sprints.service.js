'use strict';
//Sprints service used for projects REST endpoint
angular.module('coffee.core').factory('Sprints', ['CoffeeRestangular',
    function(CoffeeRestangular) {
        return CoffeeRestangular.service('sprints');
    }
]);