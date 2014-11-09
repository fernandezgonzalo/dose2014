'use strict';

angular.module('Mgmt').factory('AuthService', ['$http', '$log', function() {
  var authService = {};
  authService.loggedIn = true;

  authService.login = function () {
    // TODO  
    return true;
  };
 
  authService.isAuthenticated = function () {
    return authService.loggedIn;
  };
 
  authService.isAdmin = function () {
    return authService.isAuthenticated();
  };  

  return authService;

}]);