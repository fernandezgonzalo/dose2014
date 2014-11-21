/**
 * Created by andrew on 24.05.14.
 */

define(
    [
        //System includes
        "angular",
        "storeJson2"
    ],

    function (angular, store) {
        return angular.module("RestApiModule", [])

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
                function($http, $log)
                {

                    //////////////////////////////////////////////////////////////
                    ////////////////////// THIS
                    var module = {};

                    //////////////////////////////////////////////////////////////
                    ////////////////////// PUBLIC VARIABLES


                    //////////////////////////////////////////////////////////////
                    ////////////////////// PUBLIC METHODS

                    module.user = function ()
                    {
                        return store.get("user");
                    };

                    module.is_logged = function ()
                    {
                        return !(module.user()===undefined);
                    };

                    module.login = function(email, password)
                    {
                        var data = {
                            email: email,
                            password: password
                        };

                        return $http.post('/api/sessions', data)
                        .success
                        (
                            function()
                            {
                                store.set("user", data.email);
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
                                store.remove("user");
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

                    module.register = function(name, email, password)
                    {
                        var data = {
                            user_name: name,
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

                    module.projects = function()
                    {
                        var data = {
                            user_name: name,
                            email: email,
                            password: password
                        };

                        return $http.get('/api/projects', data)
                        .success
                        (
                            function(data, status, header, config)
                            {
                                $log.debug(data);
                                return data;
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
