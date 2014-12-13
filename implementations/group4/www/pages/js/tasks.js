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
            "TasksModule",
            [
                "RestApiModule"
            ]
        )

        .controller
        (
            "TasksCtr",
            [
                "$scope",
                "tasks",
                "projects",
                "$state",
                function($scope, tasks, projects, $state)
                {
                    $scope.tasks = tasks;
                    $scope.projects = projects;
                    $scope.state = $state;
                }
            ]
        )

        .factory
        (
            'TasksProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function()
                    {
                        return restapi.tasks();
                    };
                    return module;
                }
            ]
        )
    }
);