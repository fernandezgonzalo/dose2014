
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
            "uiEditProjectModule",
            [
                "RestApiModule",
                "ui.bootstrap",
                "ui.validate"
            ]
        )

        .controller
        (
            'EditProjectModalCtr',
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
            "EditProjectCtr",
            [
                "$scope",
                "$modal",
                "$log",
                function($scope, $modal, $log)
                {
                    $scope.editProject = function (size)
                    {
                        var modalInstance = $modal.open
                        (
                            {
                                templateUrl: 'blocks/editproject/modal.html',
                                controller: 'EditProjectModalCtr',
                                size: size
                            }
                        );

                        modalInstance.result.then
                        (
                            function (form)
                            {
                                $log.info(form);
                            }
                        );
                    };
                }
            ]
        );
    }
);
