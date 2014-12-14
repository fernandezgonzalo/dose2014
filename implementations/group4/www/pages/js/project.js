
define(
    [
        //System includes
        "angular",
        "anguComplete",
        "angularDAD",
        "angularFilters",

        //Custom includes
        "blocks/createtask/createtask",
        "blocks/edittask/edittask",
        "blocks/createsprint/createsprint",
        "blocks/editsprint/editsprint",
        "pages/js/restapi",
        "pages/js/alertservice",
        "pages/js/helper"
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
                "ngDragDrop",
                "AlertServiceModule",
                "HelperModule",
                "angular.filter"
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
                "sprintHelper",
                function($scope, restapi, $stateParams, $state, sprints, sprintHelper)
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
                    $scope.get_sprint_style = sprintHelper.get_style;
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
                "alertservice",
                "taskHelper",
                function($scope, data, restapi, $stateParams, alertservice, taskHelper)
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
                            else if(tasks[i].sprint_id === sprint.id)
                            {
                                $scope.list2.push(tasks[i]);
                            }
                        }
                    };

                    $scope.on_drop = function(event, ui, sprint_id)
                    {
                        var dragged = $scope.dragged;
                        $scope.dragged = null;

                        if(dragged == null || dragged.sprint_id == sprint_id) return;

                        if(sprint_id != $scope.backlog_id)
                        {
                            var points = parseInt(dragged.task.points);
                            for(var i = 0; i < $scope.list2.length; i++)
                            {
                                points += parseInt($scope.list2[i].points);;
                            }
                            if(points > parseInt($scope.project.max_points_per_sprint, 10))
                            {
                                alertservice.add("danger",  "You can't add the task to the sprint because maximum points per sprint has exceeded!", 3500);
                                return update_project_tasks();
                            }
                        }
                        restapi.edit_project_task(dragged.task, $stateParams.id, sprint_id, dragged.task.id).then(update_project_tasks);
                    };

                    $scope.on_drag = function(event, ui, task, sprint_id)
                    {
                        $scope.dragged =
                        {
                            sprint_id: sprint_id,
                            task: task
                        };
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

                    $scope.$on
                    (
                        "create_task",
                        function(event, data)
                        {
                            event.stopPropagation();
                            restapi.create_task(data, $stateParams.id).then(update_project_tasks);
                        }
                    );

                    $scope.get_task_style = taskHelper.get_style;
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
                "taskHelper",
                function($scope, $stateParams, restapi, tasks, taskHelper)
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
                            if(data.super_task_id)
                            {
                                restapi.create_sub_task(data, $stateParams.id, data.super_task_id).then(update_project_tasks);
                            }
                            else
                            {
                                restapi.create_task(data, $stateParams.id).then(update_project_tasks);
                            }
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

                    $scope.get_task_style = taskHelper.get_style;
                    $scope.tasks = tasks;
                    $scope.console = console;
                }
            ]
        )

        .controller
        (
            "SubTaskCtr",
            [
                "$scope",
                "restapi",
                function($scope, restapi)
                {
                    $scope.sub_tasks = [];

                    $scope.init = function(super_task_id)
                    {
                        $scope.super_task_id = super_task_id;

                        return restapi.sub_tasks(super_task_id)
                        .then
                        (
                            function (data)
                            {
                                $scope.sub_tasks = data;
                            }
                        );
                    }
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
                "alertservice",
                function($scope, $stateParams, all_users, collaborators, restapi, alertservice)
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
                        {
                            alertservice.add(undefined, "Select user!", 2000);
                            return false;
                        }
                        if($scope.selectedUsers.originalObject.id === $scope.project.user_id)
                        {
                            alertservice.add(undefined, "You are the owner!", 2000);
                            return false;
                        }
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
        )
    }
);
