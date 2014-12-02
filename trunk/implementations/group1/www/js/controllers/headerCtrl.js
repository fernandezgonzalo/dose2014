/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('HeaderCtrl', ['Users', '$scope', '$log', '$cookieStore', function (Users, $scope, $log, $cookieStore) {
        $scope.init = function () {
            $scope.loggedIn = $cookieStore.get('loggedIn');
            if ($scope.loggedIn) {
                $scope.userId = $cookieStore.get('userId');
                Users.resource.get({userId: $scope.userId}).$promise.then(function (data) {
                    $scope.user = data[0];
                });
            }
            $scope.$on('loggedIn', function (event, data) {
                $scope.loggedIn = true;
                $log.debug("Responded to the loggedIn event");
                Users.resource.get({userId: $scope.userId}).$promise.then(function (data) {
                    $scope.user = data[0];
                });
            });
            $scope.$on('loggedOut', function (event, data) {
                $log.debug("Responded to the loggedOut event");
                $scope.loggedIn = false;
                $scope.user = null;
            });
        };
        $scope.init();
    }]);