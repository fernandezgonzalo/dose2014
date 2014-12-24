'use strict';

angular.module('LetsGoTeam')

.controller('registerController', ['$scope', '$http', '$log', '$location', '$timeout',
    function($scope, $http, $log, $location, $timeout) {
        // the model that we bind to the input box

        $scope.data = [];
        $scope.status = {};
        $scope.user = {
            name: '',
            email: '',
            password: ''
        };

        $scope.successMsgVisible = false;

        // the function to add the new users
        $scope.addUser = function(user) {
                $scope.user = user;

                // the payload is simple the json object that we used for binding to the input
                var payload = $scope.user;

                $http.post('/users', payload)
                    .success(function(data, status, header, config) {
                        console.log('Succesfully registered');
                        $location.path("/login");
                        console.log('Succesfully registered');
                    })
                    .error(function(data, status) {
                        alert('User already registered');
		    })

        }
    }


])

.directive('nxEqual', function() {
    return {
        require: 'ngModel',
        link: function(scope, elem, attrs, model) {
            if (!attrs.nxEqual) {
                console.error('nxEqual expects a model as an argument!');
                return;
            }
            scope.$watch(attrs.nxEqual, function(value) {
                model.$setValidity('nxEqual', value === model.$viewValue);
            });
            model.$parsers.push(function(value) {
                var isValid = value === scope.$eval(attrs.nxEqual);
                model.$setValidity('nxEqual', isValid);
                return isValid ? value : undefined;
            });
        }
    };
});

function Ctrl($scope) {}
