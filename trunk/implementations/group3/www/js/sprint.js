'use strict';

angular.module('LetsGoTeam').controller('SprintController', ['$scope', '$http', '$log', '$timeout',
    function ($scope, $http, $log, $timeout) {
// the model that we bind to the input box
       $scope.data = {};

        $scope.newSprint = {
            name: '',
            startDate: '',
            completionDate: '',
            status: ''

        };

        $scope.successMsgVisible = false;

        // the function to add the new users
        $scope.addSprint = function (newSprint) {

            // the payload is simple the json object that we used for binding to the input
            var payload = $scope.newSprint;

            $http.post('/sprint', payload)
                .success(function (data, status, header, config) {

                    $scope.data = data;

                    if ($scope.data.status === 'ok') {
                        $log.debug('Success adding new sprint');
                    }
                    else{
                        $log.debug('Incorrect data');
                    };



                    // reset the todoModel to not have a description (we keep the last selected user)
                    $scope.newSprint.name = '';
                    $scope.newSprint.startDate = '';
                    $scope.newSprint.completionDate = '';
                    $scope.newSprint.status = '';

                    // show a success message
                    $scope.successMsgVisible = true;
                    // let the message dissapear after 2 secs
                    $timeout(function () {
                        $scope.successMsgVisible = false;
                    }, 2000);
                })
                .error(function (data, status) {
                    $log.debug('Error while trying to add a new sprint');
                });
        }
    }
]);

/**
 * Created by luciano on 11/11/14.
 */