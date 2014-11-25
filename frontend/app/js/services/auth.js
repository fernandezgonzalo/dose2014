'use strict';

angular.module('Mgmt').factory('AuthService', ['$log', 'User', 'Utility', function($log, User, Utility) {
  var TAG = 'AuthService::';
  $log.debug(TAG, 'init');

  var authService = {};
  var key = 'email';
  var passKey = 'password';

  authService.login = function(credentials, callback) {
    User.query(function(users) {
      // frontend authentication :)
      var result = null;
      for (var i in users) {
        if (users[i].email === credentials.email && users[i].password === credentials.password) {
          Utility.toCamel(users[i]);
          result = users[i];
          if (result.isAdmin === '0') {
            result.isAdmin = false;
          } else {
            result.isAdmin = true;
          }
          break;
        }
      }
      if (result) {
        authService.currentUser = result;
        localStorage.setItem(key, result.email);
        localStorage.setItem(passKey, result.password);
      }
      callback(result);
    });
  };

  authService.logout = function() {
    localStorage.removeItem(key);
    localStorage.removeItem(passKey);
    return true;
  };
 
  authService.isAuthenticated = function () {
    return localStorage.getItem(key);
  };
 
  authService.isAdmin = function () {
    return !!authService.currentUser && authService.currentUser.isAdmin;
  };  

  return authService;
}]);