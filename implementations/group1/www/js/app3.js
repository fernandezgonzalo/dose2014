var app = angular.module('ProjManagApp', ['ngRoute','ngResource']);

app.config(function ($routeProvider) {
    $routeProvider.
      when('/projectDashboard', {
        templateUrl: 'partials/projectDashboard.html',
        controller: 'UsersController'
      }).
      when('/projectDashboard/:userId', {
        templateUrl: 'partials/user-detail.html',
        controller: 'UserDetailCtrl'
      }).
	  when('/manageUsers', {
        templateUrl: 'partials/manageUsers.html',
        controller: 'UsersController'
      }).
      otherwise({
        redirectTo: '/projectDashboard'
      });
});


app.factory('Users', function ($resource) {
  return $resource('js/users/:id.json');
  });

app.controller('UsersController', function ($scope, Users) {
 Users.query(function(data){
  
  $scope.users = data;
  this.users = data;
  });
});


app.controller('UserDetailCtrl',function($routeParams){
var i = 0;
this.userId = $routeParams.userId;
this.user = null;

  for (i = 0; i < users.length; i++) {
    if (users[i].id == this.userId) {
      this.user = users[i];
    }
  }
 

});




/**

app.factory('Users', function ($resource) {
  return $resource('js/users/:id.json');
  });

app.controller('UsersController', function ($scope, Users, $log) {
 Users.query(function(data){
  	$log.info(data[0].id);
  	$scope.users = data;
});
});


app.controller('UserDetailCtrl',function($scope,$routeParams,$log){
	
	
});

  




*/
