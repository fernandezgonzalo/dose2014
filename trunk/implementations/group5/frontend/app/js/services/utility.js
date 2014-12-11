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

  this.parseDate = function(s) {
    if (typeof s === 'undefined') {
      $log.warn(TAG, 'date is undefined');
      return s;
    }
    if (s instanceof Date) {
      $log.warn(TAG, 'input is already date, need string; do nothing;', s);
      return s;
    }
    var date  = s;
    var time = '';
    if (s.indexOf(' ') !== -1) {
      s = s.split(' ');  
      date = s[0];
      time = s[1];
    }
    var y, m, d;
    if (date.indexOf('-') !== -1) {
      date = date.split('-');
      if (date.length === 3) {
        y = parseInt(date[0]);
        m = parseInt(date[1]) - 1;
        d = parseInt(date[2]);
      } else {
        $log.error(TAG, 'Can\'t parse datetime string: ', s, '; expected 3 tokens');
        return;
      }
    } else {
      $log.error(TAG, 'Can\'t parse datetime string: ', s, '; expected "-" delimeter');
      return;
    }
    if (time.indexOf(':') !== -1) {
      time = time.split(':');
      var hh, mm;
      var ss = 0;
      if (time.length >= 2) {
        hh = parseInt(time[0]);
        mm = parseInt(time[1]);
        if (time.length >= 3) {
          ss = time[2];
        }
      } else {
        $log.error(TAG, 'Can\'t parse time string: ', s, '; expected time be 2 or more tokens');
        return;
      }
      return new Date(Date.UTC(y, m, d, hh, mm, ss));
    }
    return new Date(Date.UTC(y, m, d));
  };
  
}]);