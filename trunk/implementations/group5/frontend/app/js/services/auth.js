'use strict';

angular.module('Mgmt').factory('AuthService', ['$log', 'User', 'Utility', '$http', '$q', function($log, User, Utility, $http, $q) {
  var TAG = 'AuthService::';
  $log.debug(TAG, 'init');

  var authService = {};
  authService.KEY = 'MGMT_ID';

  authService.login = function(credentials) {
    var deferred = $q.defer();
    $http.post('/api/login', credentials).then(function(response) {
      var user = new User({userId: response.data.id});
      angular.extend(user, response.data);
      authService.loginSuccess(user);
      deferred.resolve(user);
    }, function(response) {
      $log.debug(TAG, response);
      deferred.reject(response);
    });
    return deferred.promise;
  };

  authService.loginSuccess = function(user) {
    Utility.toCamel(user);
    user.lastLoginDate = Utility.parseDate(user.lastLogin);
    this.currentUser = user;
    localStorage.setItem(authService.KEY, user.id);
    authService.hasAvatar(user);
    return user;
  };

  authService.hasAvatar = function(user) {
    user.avatar = '/api/users/' + user.id + '/avatar';
    $http.get(user.avatar).then(function() {
      user.hasAvatar = true;
    }, function() {
      user.hasAvatar = false;
    });
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
    var deferred = $q.defer();
    User.get({userId: userId}, function(user) {
      authService.loginSuccess(user);
      deferred.resolve(user);
    }, deferred.reject);
    return deferred.promise;
  };
  return authService;
}]);