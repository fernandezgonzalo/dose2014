'use strict';
angular.module('coffee.core').controller('HeaderController', ['$scope', '$location', '$http', '$rootScope', 'Global',
    function($scope, $location, $http, $rootScope, Global) {
        $scope.global = Global;

        $scope.menus = [
          {link: 'listProjects', title: 'My Projects'},
          {link: 'createProject', title: 'Create Project'},
        ]

        $scope.logout = function() {
            $http.delete('/coffee/sessions').success(function(response) {
                $scope.global.user = null;
                $location.url('/');
            });
        };
    }
]);