
define(
    [
        //System includes
        "angular",
        "angularUIRoute",
        "angularAnimate",

        //Custom includes
        "blocks/navbar/navbar",
        "pages/js/projects",
        "pages/js/project",
        "pages/js/login",
        "pages/js/user",
        "pages/js/restapi"
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
                "UserModule",
                "ngAnimate",
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
                            resolve:
                            {
                                projects:
                                [
                                    "ProjectsProvider",
                                    function (ProjectsProvider)
                                    {
                                        return ProjectsProvider.resolver();
                                    }
                                ]
                            }
                        }
                    )

                    .state
                    (
                        "project",
                        {
                            url: "/projects/:id",
                            templateUrl: "pages/html/project.html",
                            controller: "ProjectCtr",
                            resolve:
                            {
                                project:
                                [
                                    "$stateParams",
                                    "ProjectProvider",
                                    function($stateParams, ProjectProvider)
                                    {
                                        return ProjectProvider.resolver($stateParams.id);
                                    }
                                ]
                            }
                        }
                    )

                    .state
                    (
                        "project.tasks",
                        {
                            url: "/tasks",
                            templateUrl: "pages/html/project/tasks.html",
                            controller: "ProjectTasksCtr"
                        }
                    )

                    .state
                    (
                        "project.sprints",
                        {
                            url: "/sprints",
                            templateUrl: "pages/html/project/sprints.html",
                            controller: "ProjectSprintsCtr"
                        }
                    )

                    .state
                    (
                        "project.users",
                        {
                            url: "/users",
                            templateUrl: "pages/html/project/users.html",
                            controller: "ProjectUsersCtr",
                            resolve:
                            {
                                all_users:
                                [
                                    "AllUsersProvider",
                                    function (AllUsersProvider)
                                    {
                                        return AllUsersProvider.resolver();
                                    }
                                ],

                                collaborators:
                                [
                                    "ProjectCollaboratorsProvider",
                                    "$stateParams",
                                    function (ProjectCollaboratorsProvider, $stateParams)
                                    {
                                        return ProjectCollaboratorsProvider.resolver($stateParams.id);
                                    }
                                ]
                            }
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
                                user:
                                [
                                    "UserProvider",
                                    function (UserProvider)
                                    {
                                        return UserProvider.resolver();
                                    }
                                ]
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
                            controller: "LoginCtr"
                        }
                    )

                    .state
                    (
                        "sprints",
                        {
                            url: "/sprints",
                            templateUrl: "pages/html/sprints.html"
                        }
                    )

                    .state
                    (
                        "tasks",
                        {
                            url: "/tasks",
                            templateUrl: "pages/html/tasks.html"
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
