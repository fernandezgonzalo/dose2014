'use strict';
//Users service used for projects REST endpoint
angular.module('coffee.users').factory('Users', ['CoffeeRestangular',
    function(CoffeeRestangular) {
        return CoffeeRestangular.service('users');
    }
]);