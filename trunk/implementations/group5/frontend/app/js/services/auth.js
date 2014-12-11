'use strict';

angular.module('Mgmt').factory('AuthService', ['$log', 'User', 'Utility', '$http', '$q', function($log, User, Utility, $http, $q) {
  var TAG = 'AuthService::';
  $log.debug(TAG, 'init');

  var authService = {};
  authService.KEY = 'MGMT_ID';


  var storage = {
    putItem: function(value) {
      localStorage.setItem(authService.KEY, value);
    },
    getItem: function() {
      return localStorage.getItem(authService.KEY);
    },
    delItem: function() {
      localStorage.removeItem(authService.KEY);
    }
  };
  if (typeof localStorage === 'undefined') {
    storage.putItem = function(value) {
      amplify.store(authService.KEY, value);
    };
    storage.getItem = function() {
      return amplify.store(authService.KEY);
    };
    storage.delItem = function() {
      this.putItem(null);
    };
  }



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
    storage.putItem(user.id);
    authService.hasAvatar(user);
    return user;
  };

  authService.hasAvatar = function(user) {
    user.avatar = '/api/users/' + user.id + '/avatar' + '?_=' + Math.random();
    $http.get(user.avatar).then(function() {
      user.hasAvatar = true;
    }, function() {
      user.hasAvatar = false;
    });
  };

  authService.logout = function() {
    $http['delete'].call($http, '/api/logout');// opera mini falls here because of keyword delete...
    storage.delItem();
  };
 
  authService.hasAuthenticatedCache = function() {
    var item = storage.getItem();
    return typeof item !== 'undefined' && item !== null && Number(item).toString() === item;
  };

  authService.isAuthenticated = function () {
    return authService.hasAuthenticatedCache() && typeof authService.currentUser !== 'undefined';
  };
 
  authService.isAdmin = function () {
    return authService.hasAuthenticatedCache() && parseInt(authService.currentUser.isAdmin) === 1;
  };

  authService.getCurrentUser = function() {
    var userId = storage.getItem();
    var deferred = $q.defer();
    User.get({userId: userId}, function(user) {
      authService.loginSuccess(user);
      deferred.resolve(user);
    }, deferred.reject);
    return deferred.promise;
  };
  return authService;
}]);