
define(
    [
        //System includes
        "angular",
        "anguComplete",
        "angularDAD",

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
                "RestApiModule",
                "ngDragDrop"
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
                "$state",
                "sprints",
                function($scope, restapi, $stateParams, $state, sprints)
                {
                    function update_project_sprints()
                    {
                        return restapi.project_sprints($stateParams.id).then
                        (
                            function(data)
                            {
                                $scope.sprints = data;
                            }
                        )
                    }

                    $scope.$on
                    (
                        "create_sprint",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.create_sprint(data, $stateParams.id).then(update_project_sprints);
                        }
                    );

                    $scope.$on
                    (
                        "edit_sprint",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.edit_sprint(data.form, data.project_id, data.sprint_id).then(update_project_sprints);
                        }
                    );

                    $scope.remove = function(sprint)
                    {
                        restapi.delete_task($stateParams.id, sprint.id).then(update_project_sprints);
                    };

                    $scope.go = function (sprint)
                    {
                        $state.go("project.sprint", {sprint_id:sprint.id});
                    };

                    $scope.sprints = sprints;
                }
            ]
        )

        .controller
        (
            "ProjectSprintCtr",
            [
                "$scope",
                "data",
                "restapi",
                "$stateParams",
                function($scope, data, restapi, $stateParams)
                {
                    $scope.sprint = data.sprint;
                    $scope.tasks = data.tasks;
                    $scope.backlog_id = "0";
                    $scope.dragged = null;

                    function update_project_tasks()
                    {
                        return restapi.project_tasks($stateParams.id).then
                        (
                            function(data)
                            {
                                $scope.tasks = data;
                                $scope.update($scope.sprint, $scope.tasks);
                            }
                        )
                    }

                    $scope.update = function(sprint, tasks)
                    {
                        $scope.list1 = [];
                        $scope.list2 = [];

                        for (var i = 0; i < tasks.length; i++)
                        {
                            if(tasks[i].sprint_id === "0")
                            {
                                $scope.list1.push(tasks[i]);
                            }
                            if(tasks[i].sprint_id === sprint.id)
                            {
                                $scope.list2.push(tasks[i]);
                            }
                        }
                    };

                    $scope.on_drop = function(event, ui, data, to)
                    {
                        var dragged = $scope.dragged;
                        $scope.dragged = null;
                        if(dragged == to) return;
                        restapi.edit_project_task(data, $stateParams.id, to, data.id).then(update_project_tasks);
                    };

                    $scope.on_drag = function(event, ui, data)
                    {
                        $scope.dragged = data;
                    };

                    $scope.remove_task = function(task)
                    {
                        restapi.delete_project_task($stateParams.id, task.id).then(update_project_tasks);
                    };

                    $scope.$on
                    (
                        "edit_task",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.edit_project_task(data.form, data.project_id, data.sprint_id, data.task_id).then(update_project_tasks)
                        }
                    );
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
                    function update_project_tasks()
                    {
                        return restapi.project_tasks($stateParams.id).then
                        (
                            function(data)
                            {
                                $scope.tasks = data;
                            }
                        )
                    }

                    $scope.$on
                    (
                        "create_task",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.create_task(data, $stateParams.id).then(update_project_tasks);
                        }
                    );

                    $scope.$on
                    (
                        "edit_task",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.edit_project_task(data.form, data.project_id, data.sprint_id, data.task_id).then(update_project_tasks)
                        }
                    );

                    $scope.remove = function(task)
                    {
                        restapi.delete_project_task($stateParams.id, task.id).then(update_project_tasks);
                    };

                    $scope.go = function ()
                    {

                    };

                    $scope.tasks = tasks;
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
            'ProjectSprintProvider',
            [
                "restapi",
                "$q",
                function(restapi, $q)
                {
                    var module = {};
                    module.resolver = function(project_id, sprint_id)
                    {
                        var results =
                        {
                            sprint: undefined,
                            tasks: undefined
                        };

                        var promises =
                        [
                            restapi.project_sprint(project_id, sprint_id)
                            .then
                            (
                                function(data)
                                {
                                    results.sprint = data;
                                }
                            ),
                            restapi.project_tasks(project_id)
                            .then
                            (
                                function(data)
                                {
                                    results.tasks = data;
                                }
                            )
                        ];
                        var deferred = $q.defer();

                        var success = function ()
                        {
                            deferred.resolve(results);
                        };

                        var error = function ()
                        {
                            deferred.reject("Can't load sprint");
                        };

                        $q.all(promises).then(success, error);

                        return deferred.promise;

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
