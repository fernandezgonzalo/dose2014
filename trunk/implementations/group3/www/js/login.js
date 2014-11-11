'use strict';

angular.module('LetsGoTeam')
  .controller('LoginController', ['$scope', '$http', '$log', '$timeout',
    function ($scope, $http, $log, $timeout) {

	  $scope.view = 1;

	  $scope.changeView = function (n){
							$scope.view = n;
						}
	  $scope.isView = function (n){
							return $scope.view === n;
						}

	  // the model that we bind to the input box
      $scope.user = {
        email: '',
		pass: '',
		remember: false
      }

      $scope.successMsgVisible = false;

      // the function to login with users information
      $scope.login = function(email, pass, remember) {

        // the payload is simple the json object that we used for binding to the input
        var payload = {
			e : email,
			p : pass,
			r : remember
		};

        $http.post('/api/users', payload)
          .success(function(data, status, header, config) {

            $log.debug('Success logging user');

            // reset the todoModel to not have a description (we keep the last selected user)
            $scope.user.email = '';
			$scope.user.pass = '';
			$scope.user.remember = false;

            // show a success message
            $scope.successMsgVisible = true;
            // let the message dissapear after 2 secs
            $timeout(function() {$scope.successMsgVisible = false;}, 2000);
          })
          .error(function(data, status) {
            $log.debug('Error while trying to login');
          });
      }

    } 
  ]);
