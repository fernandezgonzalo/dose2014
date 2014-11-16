
define(
    [
        //System includes
        "angular",

        //Custom includes
        "blocks/registration/registration",
        "pages/js/restapi"
    ],

    function(angular)
    {

        return angular.module
        (
            "LoginModule",
            [
                "RestApiModule",
                "uiRegistrationModule"
            ]
        )

        .controller
        (
            "LoginCtr",
            [
                "$scope",
                "$log",
                "restapi",
                function($scope, $log, restapi)
                {
                    $scope.login = function(form)
                    {
                        $log.info(form);
                        restapi.login(form.email, form.password);
                    }

                    $scope.logout = function(form)
                    {
                        $log.info(form);
                        restapi.logout();
                    }
                }
            ]
        );
    }
);
