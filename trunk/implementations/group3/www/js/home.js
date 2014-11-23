/**
 * Created by luciano on 23/11/14.
 */
'use strict';

angular.module('LetsGoTeam')

.config([
    'FacebookProvider',
    function(FacebookProvider) {
        var myAppId = '550009685135810';

        // You can set appId with setApp method
        // FacebookProvider.setAppId('myAppId');

        /**
         * After setting appId you need to initialize the module.
         * You can pass the appId on the init method as a shortcut too.
         */
        FacebookProvider.init(myAppId);

    }
])
    .config(['GooglePlusProvider', function(GooglePlusProvider) {
        GooglePlusProvider.init({
            clientId: '515615149517-4p9d1hqk5mav5eq257q17n3hsehe8mia.apps.googleusercontent.com',
            apiKey: ''
        });
    }])

.controller('HomeController', [
    '$scope',
    '$timeout',
    'Facebook',
    'GooglePlus',
    function($scope, $timeout, Facebook, GooglePlus) {

        // Define user empty data :/
        $scope.user = {};

        // Defining user logged status
        $scope.logged = false;

        // And some fancy flags to display messages upon user status change
        $scope.byebye = false;
        $scope.salutation = false;

        /**
         * Watch for Facebook to be ready.
         * There's also the event that could be used
         */
        $scope.$watch(
            function() {
                return Facebook.isReady();
            },
            function(newVal) {
                if (newVal)
                    $scope.facebookReady = true;
            }
        );

        var userIsConnected = false;

        Facebook.getLoginStatus(function(response) {
            if (response.status == 'connected') {
                userIsConnected = true;
            }
        });

        /**
         * IntentLogin
         */
        $scope.IntentLogin = function(number) {
            if(!userIsConnected) {
                if (number===0) {
                    $scope.login();
                }
                else{
                    $scope.login2();
                }
            }
        };


        /**
         * Login
         */
        $scope.login = function() {
            Facebook.login(function(response) {
                if (response.status == 'connected') {
                    $scope.logged = true;
                    $scope.me();
                }

            });
        };

        $scope.login2 = function () {
            GooglePlus.login().then(function (authResult) {
                console.log(authResult);

                GooglePlus.getUser().then(function (user) {
                    console.log(user);
                });
            }, function (err) {
                console.log(err);
            });
        };

        /**
         * me
         */
        $scope.me = function() {
            Facebook.api('/me', function(response) {
                /**
                 * Using $scope.$apply since this happens outside angular framework.
                 */
                $scope.$apply(function() {
                    $scope.user = response;
                });

            });
        };

        /**
         * Logout
         */
        $scope.logout = function() {
            Facebook.logout(function() {
                $scope.$apply(function() {
                    $scope.user   = {};
                    $scope.logged = false;
                });
            });
        }

        /**
         * Taking approach of Events :D
         */
        $scope.$on('Facebook:statusChange', function(ev, data) {
            console.log('Status: ', data);
            if (data.status == 'connected') {
                $scope.$apply(function() {
                    $scope.salutation = true;
                    $scope.byebye     = false;
                });
            } else {
                $scope.$apply(function() {
                    $scope.salutation = false;
                    $scope.byebye     = true;

                    // Dismiss byebye message after two seconds
                    $timeout(function() {
                        $scope.byebye = false;
                    }, 2000)
                });
            }


        });


    }
])

/**
 * Just for debugging purposes.
 * Shows objects in a pretty way
 */
    .directive('debug', function() {
        return {
            restrict:	'E',
            scope: {
                expression: '=val'
            },
            template:	'<pre>{{debug(expression)}}</pre>',
            link:	function(scope) {
                // pretty-prints
                scope.debug = function(exp) {
                    return angular.toJson(exp, true);
                };
            }
        }
    })



;