'use strict';
//Global service for global variables
angular.module('coffee.core').factory('Global', [

    function() {
        var _this = this;
        _this._data = {};
        return _this._data;
    }
]);