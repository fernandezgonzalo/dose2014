
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
            "ProjectsModule",
            [
                "RestApiModule",
                "uiRegistrationModule"
            ]
        )

        .controller
        (
            "ProjectsCtr",
            [
                "$scope",
                "$log",
                "restapi",
                function($scope, $log, restapi)
                {
                    //$scope.projects = projects;

                    $scope.login = function(form)
                    {
                        $log.info(form);
                        restapi.login(form.email, form.password);
                    };
                }
            ]
        );
    }
);
