
define(
    [
        //System includes
        "angular",
        "bootstrapUi",
        "angularUtils"
    ],

    function (angular)
    {
        return angular.module
        (
            "uiRegistrationModule",
            [
                "ui.bootstrap",
                "ui.validate"
            ]
        )

        .controller
        (
            'ModalCtr',
            [
                "$scope",
                "$modalInstance",
                function ($scope, $modalInstance)
                {
                    $scope.ok = function (form)
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
            "RegistrationCtr",
            [
                "$scope",
                "$modal",
                "$log",
                function($scope, $modal, $log)
                {
                    $scope.register = function (size)
                    {
                        var modalInstance = $modal.open
                        (
                            {
                                templateUrl: 'blocks/registration/modal.html',
                                controller: 'ModalCtr',
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
