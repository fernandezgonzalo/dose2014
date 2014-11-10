'use strict';

angular.module('Mgmt').factory('AuthService', ['$log', 'User', function($log, User) {
  var authService = {};
  var key = 'email';

  authService.login = function(credentials) {
    $log.debug('AuthService::credentials are', credentials);
    var users = User.query();
    var result = users[users.length - 1];
    for (var i in users) {
      if (users[i].email === credentials.email) {
        result = users[i];
        break;
      }
    }
    $log.debug('AuthService::result=', result);
    localStorage.setItem(key, result.email);
    return result;
  };

  authService.logout = function() {
    localStorage.removeItem(key);
    return true;
  };
 
  authService.isAuthenticated = function () {
    return localStorage.getItem(key);
  };
 
  authService.isAdmin = function () {
    return authService.isAuthenticated();
  };  

  return authService;
}]);