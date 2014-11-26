'use strict';

angular.module('Mgmt').service('Utility', ['$log', function($log) {
  
  var TAG = 'UtilityService::';

  $log.debug(TAG, 'init');

  var toCamel = function(s) {
    return s.replace(/([\-_][a-z])/g, function($1) {
      return $1.toUpperCase().replace('-','').replace('_','');
    });
  };

  var toUnderscore = function(s) {
    return s.replace(/([A-Z])/g, function($1) {
      return '_'+$1.toLowerCase();
    });
  };

  this.toUnderscore = function(obj) {
    for (var prop in obj) {
      if (prop.toLowerCase() !== prop) {
        obj[toUnderscore(prop)] = obj[prop];
        // delete obj[prop]; 
      }
    }
  };

 this.toCamel = function(obj) {
    for (var prop in obj) {
      if (prop.indexOf('_') !== -1) {
        obj[toCamel(prop)] = obj[prop];
        delete obj[prop]; 
      }
    }
  };

  this.escape = function(obj) {
    for (var prop in obj) {
      if (typeof obj[prop] === 'string' || obj[prop] instanceof String) {
        obj[prop] = obj[prop].replace(/'/g, '&quot;');
      }
    }
  };

  this.unescape = function(obj) {
    for (var prop in obj) {
      if (typeof obj[prop] === 'string' || obj[prop] instanceof String) {
        obj[prop] = obj[prop].replace(/&quot;/g, '\'');
      }
    }
  };
  
}]);