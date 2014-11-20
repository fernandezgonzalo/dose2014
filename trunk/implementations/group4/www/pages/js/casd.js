
define(
    [
        //System includes
        "angular",
        "angularUIRoute",

        //Custom includes
        "blocks/navbar/navbar",
        "pages/js/projects",
        "pages/js/login"
    ],

    function(angular)
    {
        return angular.module
        (
            "CasdModule",
            [
                'ui.router',
                "uiNavbarModule",
                "LoginModule",
                "ProjectsModule"
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
                            templateUrl: "pages/html/projects.html",
                            controller: "ProjectsCtr",
                            resolve: {
                                projectsProvider: "ProjectsProvider",
                                projects: function (projectsProvider) {
                                    return projectsProvider.resolver();
                                }
                            }
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
                            templateUrl: "pages/html/login.html",
                            //resolve: { data: 'SomeDataProvider' },
                            controller: "LoginCtr"
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
