
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
                    function update_projects()
                    {
                        return restapi.projects().then
                        (
                            function(data)
                            {
                                $scope.projects = data;
                            }
                        )
                    }

                    $scope.projects = projects;

                    $scope.remove = function(project)
                    {
                        restapi.remove_project(project.id).then(update_projects);
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
                            restapi.create_project(data.project_name, data.description, data.max_points_per_sprint).then(update_projects);
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
