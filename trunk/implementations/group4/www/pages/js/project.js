
define(
    [
        //System includes
        "angular",
        "anguComplete",

        //Custom includes
        "blocks/createtask/createtask",
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
                function($scope)
                {
                    $scope.add = function()
                    {

                    };

                    $scope.remove = function()
                    {

                    };

                    $scope.edit = function ()
                    {

                    };

                    $scope.go = function ()
                    {

                    };

                    $scope.sprints = [{"id":"0","status":"Backlog","duration":"0","project_id":"1"},{"id":"0","status":"Backlog","duration":"0","project_id":"2"},{"id":"0","status":"Backlog","duration":"0","project_id":"3"},{"id":"1","status":"Started","duration":"2","project_id":"1"},{"id":"1","status":"Started","duration":"1","project_id":"2"},{"id":"1","status":"Started","duration":"1","project_id":"3"},{"id":"0","status":"Backlog","duration":"0","project_id":"4"},{"id":"0","status":"Backlog","duration":"0","project_id":"5"}];
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
                function($scope, $stateParams, restapi)
                {
                    $scope.$on
                    (
                        "create_task",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.create_task(data, $stateParams.id);
                            //restapi.create_project(data.project_name, data.description, data.max_points_per_sprint).then(update_projects);
                        }
                    );

                    $scope.add = function()
                    {

                    };

                    $scope.remove = function()
                    {

                    };

                    $scope.edit = function ()
                    {

                    };

                    $scope.go = function ()
                    {

                    };

                    $scope.tasks = [{"id":"1","priority":"Low","position":"Backlog","type":"Feature","description":"descr","title":"task1","points":"5","super_task_id":"1","sprint_id":"1","project_id":"1","user_id":"1"},{"id":"2","priority":"Normal","position":"Process","type":"Bug","description":"descr","title":"subtask1","points":"5","super_task_id":"1","sprint_id":"1","project_id":"2","user_id":"2"},{"id":"3","priority":"High","position":"Done","type":"Bug","description":"descr","title":"task2","points":"10","super_task_id":"3","sprint_id":"1","project_id":"3","user_id":"3"}];
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
        );

    }
);
