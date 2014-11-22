
define(
    [
        //System includes
        "angular",

        //Custom includes
        "blocks/createproject/createproject",
        "blocks/editproject/editproject",
        "pages/js/restapi"
    ],

    function(angular)
    {
        return angular.module
        (
            "ProjectsModule",
            [
                "RestApiModule",
                "uiRegistrationModule",
                "uiCreateProjectModule",
                "uiEditProjectModule"
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
                "$state",
                function($scope, $log, restapi, projects, $state)
                {
                    $scope.projects = projects;

                    $scope.login = function(form)
                    {
                        $log.info(form);
                        restapi.login(form.email, form.password);
                    };

                    $scope.edit = function (project)
                    {
                        $log.info("EDIT");
                        $log.info(project);
                    };

                    $scope.go = function (project)
                    {
                        $state.go("project", {id:project.id});
                        $log.info("GO");
                        $log.info(project);
                    };

                    $scope.$on
                    (
                        "create_project",
                        function(event, data)
                        {
                            $log.info("CREATE_PROJECT");
                            event.stopPropagation();
                            restapi.create_project(data.project_name, data.description, data.max_points_per_sprint);
                        }
                    );
                }
            ]
        )

        .factory
        (
            'ProjectsProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function()
                    {
                        return restapi.projects();
                    };
                    return module;
                }
            ]
        );
    }
);
