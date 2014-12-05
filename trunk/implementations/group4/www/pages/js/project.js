
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
                function($scope, $state)
                {
                    $scope.state = $state;
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
                function($scope)
                {
                    $scope.selectedUsers = "";

                    $scope.users =
                    [
                        {
                            "user_name":"name1",
                            "email":"mail"
                        },
                        {
                            "user_name":"name2",
                            "email":"mail"
                        }
                    ];

                    $scope.query = "";

                    $scope.data = [{"id":"1","user_name":"name","is_active":"1","email":"name1@mail.com"},{"id":"2","user_name":"name1","is_active":"1","email":"name2@mail.com"},{"id":"3","user_name":"name2","is_active":"0","email":"name3@mail.com"},{"id":"4","user_name":"Foo","is_active":"1","email":"foo@foo.foo"}];

                    $scope.add_user = function()
                    {

                    }
                }
            ]
        )

    }
);
