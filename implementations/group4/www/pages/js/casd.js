
define(
    [
        //System includes
        "angular",
        "angularUIRoute",

        //Custom includes
        "blocks/navbar/navbar"
    ],

    function(angular)
    {

        return angular.module
        (
            "CasdModule",
            [
                'ui.router',
                "uiNavBar",
            ]
        )

        .config
        (
            [
                "$stateProvider",
                "$urlRouterProvider",
                function($stateProvider, $urlRouterProvider)
                {
                    $urlRouterProvider.otherwise("/");
                    /*
                    $stateProvider.state
                    (
                        "receipts",
                        {
                            url: "/",
                            templateUrl: "pages/html/<<template.html>>",
                            //resolve: { data: 'SomeDataProvider' },
                            controller: "SomeController"
                        }
                    );
                    */
                }
            ]
        )

        .controller
        (
            "CasdCtr",
            [
                "$scope",
                function($scope, vmapi)
                {
                    $scope.affixed = "top";
                    $scope.brand = "<span class='glyphicon glyphicon-user'></span> User 1";

                    $scope.menus = [
                        {
                            title : "Tasks",
                            action : "singular"
                        },
                        {
                            title : "Projects",
                            action : "singular"
                        },
                        {
                            title : "Sprints",
                            action : "singular"
                        },
                        {
                            title : "Topics",
                            action : "singular"
                        },
                        {
                            title : "Users",
                            action : "singular"
                        }
                    ]; // end menus
                }
            ]
        );
    }
);
