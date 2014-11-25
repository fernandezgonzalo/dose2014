
define(
    [
        //System includes
        "angular",
        "anguComplete"

        //Custom includes
    ],

    function(angular)
    {
        return angular.module
        (
            "ProjectModule",
            [
                "angucomplete"
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
                    $scope.add_sprint = function()
                    {

                    }
                }
            ]
        )

        .controller
        (
            "ProjectTasksCtr",
            [
                "$scope",
                function($scope)
                {
                    $scope.add_task = function()
                    {

                    }
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
