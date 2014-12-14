define(
    [
        //System includes
        "angular",
        "angularFilters",

        //Custom includes
        "pages/js/restapi",
        "pages/js/helper"
    ],
    function(angular)
    {
        return angular.module
        (
            "TasksModule",
            [
                "RestApiModule",
                "HelperModule",
                "angular.filter"
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
                "taskHelper",
                function($scope, tasks, projects, $state, taskHelper)
                {
                    $scope.tasks = tasks;
                    $scope.projects = projects;
                    $scope.state = $state;
                    $scope.get_task_style = taskHelper.get_style;
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