
define(
    [
        //System includes
        "angular",
        "angularUIRoute",

        //Custom includes
        "blocks/navbar/navbar",
        "pages/js/projects",
        "pages/js/project",
        "pages/js/login",
        "pages/js/user"
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
                "ProjectsModule",
                "ProjectModule",
                "UserModule"
            ]
        )

        .config
        (
            [
                "$stateProvider",
                "$urlRouterProvider",
                function($stateProvider, $urlRouterProvider)
                {
                    $urlRouterProvider.otherwise("/projects");

                    $stateProvider
                    .state
                    (
                        "projects",
                        {
                            url: "/projects",
                            templateUrl: "pages/html/projects.html",
                            controller: "ProjectsCtr",
                            resolve: {
                                projectsProvider: "ProjectsProvider",
                                projects: function (projectsProvider)
                                {
                                    return projectsProvider.resolver();
                                }
                            }
                        }
                    )

                    .state
                    (
                        "project",
                        {
                            url: "/projects/:id",
                            templateUrl: "pages/html/project.html",
                            //resolve: { data: 'SomeDataProvider' },
                            controller: "ProjectCtr"
                        }
                    )

                    .state
                    (
                        "project.tasks",
                        {
                            url: "/tasks",
                            templateUrl: "pages/html/project/tasks.html",
                            //resolve: { data: 'SomeDataProvider' },
                            controller: "ProjectTasksCtr"
                        }
                    )

                    .state
                    (
                        "project.sprints",
                        {
                            url: "/sprints",
                            templateUrl: "pages/html/project/sprints.html",
                            //resolve: { data: 'SomeDataProvider' },
                            controller: "ProjectSprintsCtr"
                        }
                    )

                    .state
                    (
                        "project.users",
                        {
                            url: "/users",
                            templateUrl: "pages/html/project/users.html",
                            //resolve: { data: 'SomeDataProvider' },
                            controller: "ProjectUsersCtr"
                        }
                    )

                    .state
                    (
                        "user",
                        {
                            url: "/user",
                            templateUrl: "pages/html/user.html",
                            controller: "UserCtr",
                            resolve:
                            {
                                userProvider: "UserProvider",
                                user: function (userProvider)
                                {
                                    return userProvider.resolver();
                                }
                            }
                        }
                    )

                    .state
                    (
                        "task",
                        {
                            url: "/task",
                            templateUrl: "pages/html/task.html"
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
                    )

                    .state
                    (
                        "sprints",
                        {
                            url: "/sprints",
                            templateUrl: "pages/html/sprints.html"
                            //resolve: { data: 'SomeDataProvider' },
                        }
                    )

                    .state
                    (
                        "tasks",
                        {
                            url: "/tasks",
                            templateUrl: "pages/html/tasks.html"
                            //resolve: { data: 'SomeDataProvider' },
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
                "restapi",
                "$state",
                function($scope, restapi, $state)
                {
                    $scope.$on
                    (
                        'event:loginRequired',
                        function()
                        {
                            if(restapi.is_logged())
                            {
                                restapi.logout();
                            }
                            $state.go("login");
                        }
                    );
                }
            ]
        );
    }
);
