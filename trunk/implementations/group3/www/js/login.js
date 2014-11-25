'use strict';

angular.module('LetsGoTeam')
  .controller('LoginController', ['$scope', '$http', '$log', '$timeout',
    function ($scope, $http, $log, $timeout) {

	  $scope.view = 1;

      $scope.data = {};

	  $scope.changeView = function (n){
							$scope.view = n;
						};
	  $scope.isView = function (n){
							return $scope.view === n;
						};

	  // the model that we bind to the input box
      $scope.user = {
        email: '',
		pass: ''
      };

      $scope.successMsgVisible = false;

      // the function to login with users information
      $scope.login = function(user) {

        // the payload is simple the json object that we used for binding to the input
        var payload = $scope.user;

        $http.post('/login', payload)
          .success(function(data, status, header, config) {

            $scope.data = data;
              if ($scope.data.status === 'ok') {
                $log.debug('Success logging user');
              }
              else{
                $log.debug('Incorrect data');
              };

            // reset the todoModel to not have a description (we keep the last selected user)
            $scope.user.email = '';
			$scope.user.pass = '';

          })
          .error(function(data, status) {
            $log.debug('Error while trying to login');
          });
      };

      $scope.forgotPassword = function(user){

          var payload = user;

        $http.post('/login/forgot-password', payload)
            .success(function(data, status, header, config) {

              $scope.status = data;
              if ($scope.status === 'ok') {
                $log.debug('New password:'+ $scope.status.newPass);
              }
              else{
                $log.debug('Incorrect data');
              };

              // reset the todoModel to not have a description (we keep the last selected user)
              $scope.user.email = '';
              $scope.user.pass = '';

            })
            .error(function(data, status) {
              $log.debug('Error while trying to get a password');
            });
      }

    } 
  ]);
