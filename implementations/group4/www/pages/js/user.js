
define(
    [
        //System includes
        "angular",

        //Custom includes
        "pages/js/restapi"
    ],

    function(angular)
    {
        return angular.module
        (
            "UserModule",
            [
                "RestApiModule"
            ]
        )

        .controller
        (
            "UserCtr",
            [
                "$scope",
                "user",
                function($scope, user)
                {
                    $scope.user = user;
                }
            ]
        )

        .factory
        (
            'UserProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function()
                    {
                        return restapi.current_user();
                    };
                    return module;
                }
            ]
        );
    }
);
