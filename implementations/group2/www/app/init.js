'use strict';

//on ready
angular.element(document).ready(function() {
    //Fixing facebook bug with redirect
    if (window.location.hash === '#_=_') window.location.hash = '#!';
    //Then init the app
    angular.bootstrap(document, ['coffee']);
});
//modules
var modules = ['restangular', 'ui.bootstrap', 'ui.router', 'coffee.core', 'coffee.users'];
angular.module('coffee.core').config(['$locationProvider',
    function($locationProvider) {
        $locationProvider.hashPrefix('!');
    }
]);
// Combined modules
angular.module('coffee', modules);