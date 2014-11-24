'use strict';

angular.module('Demo')
.controller('SessionCtrl', ['$scope', '$http', '$log', '$timeout',
function ($scope, $http, $log, $timeout) {
	// the model that we bind to the input box
	$scope.formData = {
        email: '',
        pass: ''
	}
	$scope.response = {
		status: '', 
		reason: '', 
		session_id: '' 
	}

	$scope.successMsgVisible = false;
	$scope.errorMsgVisible = false;

	// the function to login
	$scope.login = function(email, pass) {
		// the payload is simple the json object that we used for binding to the input
		$log.info(email)
		$log.info(pass)
        var payload = {
			email: email,
			password: pass
        }

        $http.post('/api/login', payload)
		.success(function(data, status, header, config) {	  
            $log.info('Success logging in the user');
		//	$log.info(status);
		//	$log.info(header);
		//	$log.info(config);
		//	$scope.response.status = status;
		//	$scope.response.header = header;
		//	$scope.response.config = config;
						
          //   show a success message
            $scope.successMsgVisible = true;
         //    let the message dissapear after 2 secs
            $timeout(function() {$scope.successMsgVisible = false;}, 2000);
			
		})
		.error(function(data, status) {
            $log.info('Error while trying to login user.');

            // show a success message
            $scope.errorMsgVisible = true;
         //    let the message dissapear after 2 secs
            $timeout(function() {$scope.errorMsgVisible = false;}, 2000);

		});
	}


	// the function to logout
	$scope.logout = function() {

        $http.delete('/api/sessions')
		.success(function(data, status, header, config) {

            $log.debug('Success logging out the user');

            // show a success message
            $scope.successMsgVisible = true;
            // let the message dissapear after 2 secs
            $timeout(function() {$scope.successMsgVisible = false;}, 2000);
		})
		.error(function(data, status) {
            $log.debug('Error while logging out the user.');
		});
	}
} 
]);
