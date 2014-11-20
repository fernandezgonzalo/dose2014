
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
                "projects",
                function($scope, $log, restapi, projects)
                {
                    $scope.projects = projects;

                    $scope.login = function(form)
                    {
                        $log.info(form);
                        restapi.login(form.email, form.password);
                    };
                }
            ]
        )

        .factory
        (
            'ProjectsProvider',
            [
                function()
                {
                    var module = {};
                    module.resolver = function()
                    {
                        return ["project1", "project2", "project3", "project4"];
                    };
                    return module;
                }
            ]
        );
    }
);
