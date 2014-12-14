define(
    [
        //System includes
        "angular",
        "angularFilters",

        //Custom includes
        "pages/js/restapi"
    ],
    function(angular)
    {
        return angular.module
        (
            "SprintsModule",
            [
                "RestApiModule",
                "angular.filter"
            ]
        )
        .controller
        (
            "SprintsCtr",
            [
                "$scope",
                "sprints",
                "projects",
                "$state",
                function($scope, sprints, projects, $state)
                {
                    $scope.sprints = sprints;
                    $scope.projects = projects;
                    $scope.state = $state;

                    $scope.go = function(project_id, sprint_id)
                    {
                        $state.go("project.sprint", {id:project_id, sprint_id:sprint_id} );
                    }
                }
            ]
        )

        .factory
        (
            'SprintsProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function()
                    {
                        return restapi.sprints();
                    };
                    return module;
                }
            ]
        )
    }
);