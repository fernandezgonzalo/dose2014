'use strict';

angular.module('Mgmt').factory('AuthService', ['$log', function($log) {
  var authService = {};
  var key = 'loggedIn';

  authService.login = function(credentials) {
    $log.debug('credentials are', credentials);
    localStorage.setItem(key, true);
    return true;
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