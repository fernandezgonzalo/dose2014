
define(
    [
        //System includes
        "angular",
        "anguComplete",

        //Custom includes
        "blocks/createtask/createtask",
        "blocks/edittask/edittask",
        "blocks/createsprint/createsprint",
        "blocks/editsprint/editsprint",
        "pages/js/restapi"
    ],

    function(angular)
    {
        return angular.module
        (
            "ProjectModule",
            [
                "angucomplete",
                "uiCreateTaskModule",
                "uiEditTaskModule",
                "uiCreateSprintModule",
                "uiEditSprintModule",
                "RestApiModule"
            ]
        )

        .controller
        (
            "ProjectCtr",
            [
                "$scope",
                "$state",
                "project",
                function($scope, $state, project)
                {
                    $scope.state = $state;
                    $scope.project = project;
                }
            ]
        )

        .controller
        (
            "ProjectSprintsCtr",
            [
                "$scope",
                "restapi",
                "$stateParams",
                "sprints",
                function($scope, restapi, $stateParams, sprints)
                {
                    $scope.$on
                    (
                        "create_sprint",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.create_sprint(data, $stateParams.id);
                        }
                    );

                    $scope.$on
                    (
                        "edit_sprint",
                        function(event, data)
                        {
                            event.stopPropagation();
                            console.log("edit_sprint");
                        }
                    );

                    $scope.remove = function()
                    {
                        console.log("Remove sprint");
                    };

                    $scope.go = function ()
                    {

                    };

                    $scope.sprints = sprints;

                    //$scope.sprints = [{"id":"0","status":"Backlog","duration":"0","project_id":"1"},{"id":"0","status":"Backlog","duration":"0","project_id":"2"},{"id":"0","status":"Backlog","duration":"0","project_id":"3"},{"id":"1","status":"Started","duration":"2","project_id":"1"},{"id":"1","status":"Started","duration":"1","project_id":"2"},{"id":"1","status":"Started","duration":"1","project_id":"3"},{"id":"0","status":"Backlog","duration":"0","project_id":"4"},{"id":"0","status":"Backlog","duration":"0","project_id":"5"}];
                }
            ]
        )

        .controller
        (
            "ProjectTasksCtr",
            [
                "$scope",
                "$stateParams",
                "restapi",
                "tasks",
                function($scope, $stateParams, restapi, tasks)
                {
                    $scope.$on
                    (
                        "create_task",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.create_task(data, $stateParams.id);
                        }
                    );

                    $scope.$on
                    (
                        "edit_task",
                        function(event, data)
                        {
                            event.stopPropagation();
                            console.log("edit_task");
                        }
                    );

                    $scope.remove = function()
                    {
                        console.log("Remove task");
                    };

                    $scope.go = function ()
                    {

                    };

                    $scope.tasks = tasks; //[{"id":"1","priority":"Low","position":"Backlog","type":"Feature","description":"descr","title":"task1","points":"5","super_task_id":"1","sprint_id":"1","project_id":"1","user_id":"1"},{"id":"2","priority":"Normal","position":"Process","type":"Bug","description":"descr","title":"subtask1","points":"5","super_task_id":"1","sprint_id":"1","project_id":"2","user_id":"2"},{"id":"3","priority":"High","position":"Done","type":"Bug","description":"descr","title":"task2","points":"10","super_task_id":"3","sprint_id":"1","project_id":"3","user_id":"3"}];
                }
            ]
        )

        .controller
        (
            "ProjectUsersCtr",
            [
                "$scope",
                "$stateParams",
                "all_users",
                "collaborators",
                "restapi",
                function($scope, $stateParams, all_users, collaborators, restapi)
                {
                    function update_project_collaborators()
                    {
                        return restapi.project_collaborators($stateParams.id).then
                        (
                            function(data)
                            {
                                $scope.collaborators = data;
                            }
                        )
                    }

                    $scope.data = all_users;
                    $scope.collaborators = collaborators;

                    $scope.add_collaborator = function()
                    {
                        if($scope.selectedUsers === undefined || $scope.selectedUsers === null)
                            return false;
                        if($scope.selectedUsers.originalObject.id === $scope.project.user_id)
                            return false;
                        return restapi.add_project_collaborator($stateParams.id, $scope.selectedUsers.originalObject.id)
                            .then(update_project_collaborators);
                    };

                    $scope.remove_collaborator = function(user)
                    {
                        return restapi.remove_project_collaborator($stateParams.id, user.id)
                            .then(update_project_collaborators);
                    };
                }
            ]
        )

        .factory
        (
            'AllUsersProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function()
                    {
                        return restapi.all_users();
                    };
                    return module;
                }
            ]
        )

        .factory
        (
            'ProjectCollaboratorsProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function(id)
                    {
                        return restapi.project_collaborators(id);
                    };
                    return module;
                }
            ]
        )

        .factory
        (
            'ProjectProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function(id)
                    {
                        return restapi.project(id);
                    };
                    return module;
                }
            ]
        )

        .factory
        (
            'ProjectSprintsProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function(id)
                    {
                        return restapi.project_sprints(id);
                    };
                    return module;
                }
            ]
        )

        .factory
        (
            'ProjectTasksProvider',
            [
                "restapi",
                function(restapi)
                {
                    var module = {};
                    module.resolver = function(id)
                    {
                        return restapi.project_tasks(id);
                    };
                    return module;
                }
            ]
        );
    }
);
