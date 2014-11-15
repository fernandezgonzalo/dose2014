
define(
    [
        //System includes
        "angular"
    ],

    function (angular)
    {
        return angular.module
        (
            "uiNavbarModule",
            [
            ]
        )

        .directive
        (
            'uiNavbar',
            [
                function()
                {
                    return {
                        restrict: 'E',
                        scope: true,
                        replace: true,
                        templateUrl: 'blocks/navbar/navbar.html',
                        controller:
                        [
                            "$scope",
                            "$state",
                            function($scope, $state)
                            {
                                $scope.state = $state;
                            }
                        ]
                    };
                }
            ]
        )
    }
);
