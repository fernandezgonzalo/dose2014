'use strict';



angular.module('LetsGoTeam')


.controller('registerController', ['$scope', '$http', '$log', '$timeout',
    function ($scope, $http, $log, $timeout) {
// the model that we bind to the input box

    $scope.data = [];
        $scope.listLength = users.length;
    $scope.status = {};
    $scope.user = {
        firstName: '',

        lastName: '',
        email: '',
        password: ''

    };

    $scope.successMsgVisible = false;

    // the function to add the new users
    $scope.addUser = function (newUser) {

        $scope.successMsgVisible = true;

        $scope.user = newUser;

        users.push($scope.user);

        $scope.listLength = users.length;


        // the payload is simple the json object that we used for binding to the input
        // var payload = $scope.user;

        /*$http.post('/users', payload)
         .success(function (data, status, header, config) {
         $scope.status = data;
         if ($scope.status === 'ok') {
         $log.debug('Success adding new user');
         }
         else{
         $log.debug('Error while trying to add a new user');
         };


         // reset the todoModel to not have a description (we keep the last selected user)
         // $scope.user.firstName = '';
         $scope.user.name = '';
         $scope.user.email = '';
         $scope.user.password = '';

         // show a success message
         $scope.successMsgVisible = true;
         // let the message dissapear after 2 secs
         $timeout(function () {
         $scope.successMsgVisible = false;
         }, 2000);
         })
         .error(function (data, status) {
         $log.debug('Error while trying to add a new user');
         });
         }*/

    }
    }


])

.directive('nxEqual', function() {
    return {
        require: 'ngModel',
        link: function (scope, elem, attrs, model) {
            if (!attrs.nxEqual) {
                console.error('nxEqual expects a model as an argument!');
                return;
            }
            scope.$watch(attrs.nxEqual, function (value) {
                model.$setValidity('nxEqual', value === model.$viewValue);
            });
            model.$parsers.push(function (value) {
                var isValid = value === scope.$eval(attrs.nxEqual);
                model.$setValidity('nxEqual', isValid);
                return isValid ? value : undefined;
            });
        }
    };
});

function Ctrl($scope) {}





