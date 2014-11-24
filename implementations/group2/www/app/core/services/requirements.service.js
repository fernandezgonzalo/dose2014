'use strict';
//Requirements service used for requirements REST endpoint
angular.module('coffee.core').factory('Requirements', ['CoffeeRestangular',
    function(CoffeeRestangular) {
        return CoffeeRestangular.service('reqs');
    }
]);