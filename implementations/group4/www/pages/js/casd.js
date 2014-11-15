
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
                "uiNavbarModule",
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

                    $stateProvider
                    .state
                    (
                        "main",
                        {
                            url: "/",
                            templateUrl: "pages/html/main.html"
                            //resolve: { data: 'SomeDataProvider' },
                            //controller: "SomeController"
                        }
                    )

                    .state
                    (
                        "project",
                        {
                            url: "/project",
                            templateUrl: "pages/html/project.html"
                            //resolve: { data: 'SomeDataProvider' },
                            //controller: "SomeController"
                        }
                    )

                    .state
                    (
                        "user",
                        {
                            url: "/user",
                            templateUrl: "pages/html/user.html"
                            //resolve: { data: 'SomeDataProvider' },
                            //controller: "SomeController"
                        }
                    )

                    .state
                    (
                        "task",
                        {
                            url: "/task",
                            templateUrl: "pages/html/task.html"
                            //resolve: { data: 'SomeDataProvider' },
                            //controller: "SomeController"
                        }
                    )

                    .state
                    (
                        "login",
                        {
                            url: "/login",
                            templateUrl: "pages/html/login.html"
                            //resolve: { data: 'SomeDataProvider' },
                            //controller: "SomeController"
                        }
                    );
                }
            ]
        )

        .controller
        (
            "CasdCtr",
            [
                "$scope",
                function($scope)
                {
                }
            ]
        );
    }
);
