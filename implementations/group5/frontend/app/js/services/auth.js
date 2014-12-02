'use strict';

angular.module('Mgmt').factory('AuthService', ['$log', 'User', 'Utility', '$http', function($log, User, Utility, $http) {
  var TAG = 'AuthService::';
  $log.debug(TAG, 'init');

  var authService = {};
  authService.KEY = 'MGMT_ID';

  authService.login = function(credentials) {
    return new Promise(function(resolve, reject) {
      $http.post('/api/login', credentials).then(function(response) {
        var user = new User({userId: response.data.id});
        angular.extend(user, response.data);
        authService.loginSuccess(user);
        resolve(user);
      }, function(response) {
        $log.debug(TAG, response);
        reject(response);
      });
    });
  };

  authService.loginSuccess = function(user) {
    Utility.toCamel(user);
    user.lastLoginDate = Utility.parseDate(user.lastLogin);
    this.currentUser = user;
    localStorage.setItem(authService.KEY, user.id);
    return user;
  };

  authService.logout = function() {
    $http.delete('/api/logout');
    localStorage.removeItem(authService.KEY);
  };
 
  authService.isAuthenticated = function () {
    return localStorage.getItem(authService.KEY) ;
  };
 
  authService.isAdmin = function () {
    return !!authService.currentUser && authService.currentUser.isAdmin;
  };

  authService.getCurrentUser = function() {
    var userId = localStorage.getItem(authService.KEY);
    return new Promise(function(resolve, reject) {
      User.get({userId: userId}, function(user) {
        authService.loginSuccess(user);
        resolve(user);
      }, reject);
    });
  };
  return authService;
}]);