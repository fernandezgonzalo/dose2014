/**
 * Created by ludste on 28/11/14.
 */

'use strict';

angular.module('DOSEMS.controllers')
    .controller('HeaderCtrl', ['Users', '$scope', '$log', function (Users, $scope, $log) {
        $scope.init = function () {
            $scope.$on('loggedIn', function (event, data) {
                $scope.loggedIn = Users.loggedIn;
                $log.debug("Responded to the loggedIn event");
                $scope.user = Users.currentUser;
            });
            $scope.$on('loggedOut', function (event, data) {
                $log.debug("Responded to the loggedOut event");
                $scope.loggedIn = Users.loggedIn;
                $scope.user = null;
            });
        };
        $scope.init();
    }]);