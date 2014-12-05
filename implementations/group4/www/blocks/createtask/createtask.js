
define(
    [
        //System includes
        "angular",
        "bootstrapUi"
    ],

    function (angular)
    {
        return angular.module
        (
            "uiCreateTaskModule",
            [
                "ui.bootstrap"
            ]
        )

        .controller
        (
            'CreateTaskModalCtr',
            [
                "$scope",
                "$modalInstance",
                function ($scope, $modalInstance)
                {
                    $scope.type_opt =
                    [
                        {
                            id: "Feature",
                            name: "Feature"
                        },
                        {
                            id: "Bug",
                            name: "Bug"
                        }
                    ];

                    $scope.priority_opt =
                    [
                        {
                            id: "High",
                            name: "High"
                        },
                        {
                            id: "Normal",
                            name: "Normal"
                        },
                        {
                            id: "Low",
                            name: "Low"
                        }
                    ];

                    $scope.position_opt =
                    [
                        {
                            id: "Backlog",
                            name: "Backlog"
                        },
                        {
                            id: "Process",
                            name: "Process"
                        },
                        {
                            id: "Done",
                            name: "Done"
                        },
                        {
                            id: "Testing",
                            name: "Testing"
                        },
                        {
                            id: "Canceled",
                            name: "Canceled"
                        }
                    ];

                    $scope.form =
                    {
                        type: "Feature",
                        priority: "Normal",
                        position: "Backlog"
                    };

                    $scope.save = function (form)
                    {
                        $modalInstance.close(form);
                    };

                    $scope.cancel = function ()
                    {
                        $modalInstance.dismiss('cancel');
                    };
                }
            ]
        )

        .controller
        (
            "CreateTaskCtr",
            [
                "$scope",
                "$modal",
                function($scope, $modal)
                {
                    $scope.createTask = function (size)
                    {
                        var modalInstance = $modal.open
                        (
                            {
                                templateUrl: 'blocks/createtask/modal.html',
                                controller: 'CreateTaskModalCtr',
                                size: size
                            }
                        );

                        modalInstance.result.then
                        (
                            function (form)
                            {
                                $scope.$emit("create_task", form);
                            }
                        );
                    };
                }
            ]
        );
    }
);
