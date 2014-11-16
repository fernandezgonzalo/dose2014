/**
 * Created by andrew on 24.05.14.
 */

define(
    [
        //System includes
        "angular",
        "angularCookies"
    ],

    function (angular) {
        return angular.module("RestApiModule", ["ngCookies"])

        /*
        .config
        (
            [
                "$httpProvider",
                function($httpProvider)
                {
                    $httpProvider.responseInterceptors.push("errorHttpInterceptor");
                }
            ]
        )
        */

        .factory
        (
            "restapi",
            [
                "$http",
                "$log",
                "$cookies",
                function($http, $log, $cookies)
                {

                    //////////////////////////////////////////////////////////////
                    ////////////////////// THIS
                    var module = {};

                    //////////////////////////////////////////////////////////////
                    ////////////////////// PUBLIC VARIABLES


                    //////////////////////////////////////////////////////////////
                    ////////////////////// PUBLIC METHODS

                    module.login = function(email, password)
                    {
                        var data = {
                            user_name: email,
                            password: password
                        };

                        $http.post('/api/sessions', data)
                        .success
                        (
                            function(data, status, header, config)
                            {
                                $log.debug(data);
                                $log.debug($cookies);
                            }
                        )
                        .error
                        (
                            function(data, status)
                            {
                                $log.debug("error");
                                $log.debug(data);
                            }
                        );
                    };

                    module.logout = function()
                    {
                        $http.delete('/api/sessions')
                        .success
                        (
                            function(data, status, header, config)
                            {
                                $log.debug(data);
                                $log.debug($cookies);
                            }
                        )
                        .error
                        (
                            function(data, status)
                            {
                                $log.debug("error");
                                $log.debug(data);
                            }
                        );
                    };

                    module.register = function(email, password)
                    {
                        var data = {
                            user_name: email,
                            email: email,
                            password: password
                        };

                        $http.post('/api/users', data)
                        .success
                        (
                            function(data, status, header, config)
                            {
                                $log.debug(data);
                            }
                        )
                        .error
                        (
                            function(data, status)
                            {
                                $log.debug("error");
                                $log.debug(data);
                            }
                        );
                    };

                    //////////////////////////////////////////////////////////////
                    ////////////////////// PRIVATE METHODS

                    return module;
                }
            ]
        );
        /*
        .factory
        (
            "errorHttpInterceptor",
            [
                "$q",
                "$rootScope",
                function($q, $rootScope)
                {
                    function onSuccess(response)
                    {
                        return response;
                    }

                    function onError(response)
                    {
                        if(response.status === 401)
                        {
                            $rootScope.$broadcast("event:loginRequired");
                        }
                        return $q.reject(response);
                    }

                    return function(promise)
                    {
                        return promise.then(onSuccess, onError);
                    };
                }
            ]
        );
        */
    }
);
