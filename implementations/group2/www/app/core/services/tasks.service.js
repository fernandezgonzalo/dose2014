'use strict';
//Tasks service used for tasks REST endpoint
angular.module('coffee.core').factory('Tasks', ['CoffeeRestangular',
    function(CoffeeRestangular) {
        return CoffeeRestangular.service('tasks');
    }
]);