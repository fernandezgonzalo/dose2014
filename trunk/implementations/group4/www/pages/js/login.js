
define(
    [
        //System includes
        "angular",

        //Custom includes
        "blocks/registration/registration"
    ],

    function(angular)
    {

        return angular.module
        (
            "LoginModule",
            [
                "uiRegistrationModule"
            ]
        )

        .controller
        (
            "LoginCtr",
            [
                "$scope",
                "$log",
                function($scope, $log)
                {
                    $scope.login = function(form)
                    {
                        $log.info(form);
                    }
                }
            ]
        );
    }
);
