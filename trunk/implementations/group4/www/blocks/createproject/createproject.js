
define(
    [
        //System includes
        "angular",
        "bootstrapUi",
        "angularUtils",
    ],

    function (angular)
    {
        return angular.module
        (
            "uiCreateProjectModule",
            [
                "ui.bootstrap",
                "ui.validate"
            ]
        )

        .controller
        (
            'CreateProjectModalCtr',
            [
                "$scope",
                "$modalInstance",
                function ($scope, $modalInstance)
                {
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
            "CreateProjectCtr",
            [
                "$scope",
                "$modal",
                "$log",
                function($scope, $modal, $log)
                {
                    $scope.createProject = function (size)
                    {
                        var modalInstance = $modal.open
                        (
                            {
                                templateUrl: 'blocks/createproject/modal.html',
                                controller: 'CreateProjectModalCtr',
                                size: size
                            }
                        );

                        modalInstance.result.then
                        (
                            function (form)
                            {
                                $log.info(form);
                                $scope.$emit("create_project", form);
                            }
                        );
                    };
                }
            ]
        );
    }
);
