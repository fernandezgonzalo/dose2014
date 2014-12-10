/**
 * Created by andrew on 24.05.14.
 */

define(
    [
        //System includes
        "angular",
        "storeJson2"
    ],

    function (angular, store) {
        return angular.module("RestApiModule", [])


        .config
        (
            [
                "$httpProvider",
                function($httpProvider)
                {
                    $httpProvider.responseInterceptors.push("errorHttpInterceptor");
                }
            ]
        )

        .factory
        (
            "restapi",
            [
                "$http",
                "$log",
                function($http, $log)
                {

                    //////////////////////////////////////////////////////////////
                    ////////////////////// THIS
                    var module = {};

                    //////////////////////////////////////////////////////////////
                    ////////////////////// PUBLIC VARIABLES


                    //////////////////////////////////////////////////////////////
                    ////////////////////// PUBLIC METHODS

                    module.change = function(name, email, password, id)
                    {
                        var data =
                        {
                            user_name: name,
                            email: email,
                            password: password
                        };

                        return $http.post('/api/users/'+id, data);
                    };

                    module.delete_user = function(id)
                    {
                        return $http.delete('/api/users/'+id);
                    };

                    module.user = function ()
                    {
                        return store.get("user");
                    };

                    module.is_logged = function ()
                    {
                        return !(module.user()===undefined);
                    };

                    module.login = function(email, password)
                    {
                        var data = {
                            email: email,
                            password: password
                        };

                        return $http.post('/api/sessions', data)
                        .success
                        (
                            function()
                            {
                                store.set("user", data.email);
                            }
                        )
                        .error
                        (
                            function(data, status)
                            {
                                $log.debug("error");
                                $log.debug(data);
                            }
                        );
                    };

                    module.logout = function()
                    {
                        $http.delete('/api/sessions').then
                        (
                            function()
                            {
                                store.remove("user");
                            }
                        )
                    };

                    module.register = function(name, email, password)
                    {
                        var data =
                        {
                            user_name: name,
                            email: email,
                            password: password
                        };

                        return $http.post('/api/users', data);
                    };

                    module.projects = function()
                    {
                        return $http.get('/api/projects')
                        .then
                        (
                            function(data)
                            {
                                return data.data;
                            },
                            function(data)
                            {
                                $log.info("error");
                                $log.info(data);
                            }
                        )
                    };

                    module.project = function(project_id)
                    {
                        return $http.get('/api/projects/'+project_id)
                        .then
                        (
                            function(data)
                            {
                                return data.data;
                            },
                            function(data)
                            {
                                $log.info("error");
                                $log.info(data);
                            }
                        )
                    };

                    module.remove_project = function(id)
                    {
                        return $http.delete('/api/projects/' + id);
                    };

                    module.current_user = function()
                    {
                        return $http.get('/api/user')
                        .then
                        (
                            function(data)
                            {
                                return data.data;
                            },
                            function(data)
                            {
                                $log.debug("error");
                                $log.debug(data);
                            }
                        )
                    };

                    module.create_project = function(name, description, max_points_per_sprint)
                    {
                        var request =
                        {
                            name: name,
                            status: "Active",
                            description: description,
                            max_points_per_sprint: max_points_per_sprint.toString()
                        };

                        return $http.post("/api/projects", request).then
                        (
                            function(data)
                            {
                                return data.data;
                            }
                        );
                    };

                    module.edit_project = function (form, project_id)
                    {
                        var request =
                        {
                            name: form.name,
                            status: form.status,
                            description: form.description,
                            max_points_per_sprint: form.max_points_per_sprint.toString()
                        };

                        return $http.post("/api/projects/"+project_id, request);
                    };

                    module.create_task = function (form, project_id)
                    {
                        var request =
                        {
                            title: form.title,
                            description: form.description,
                            priority: form.priority,
                            position: form.position,
                            points: form.points.toString(),
                            type: form.type
                        };

                        return $http.post("/api/projects/"+project_id+"/tasks", request)
                        .then
                        (
                            function(data)
                            {
                                console.log(data.data);
                                return data.data;
                            }
                        );
                    };

                    module.all_users = function ()
                    {
                        return $http.get("/api/users").then
                        (
                            function(data)
                            {
                                return data.data;
                            }
                        )
                    };

                    module.project_collaborators = function (project_id) {
                        return $http.get("/api/projects/" + project_id + "/collaborators")
                        .then
                        (
                            function(data)
                            {
                                return data.data;
                            }
                        )
                    };

                    module.add_project_collaborator = function (project_id, user_id) {
                        return $http.post("/api/projects/" + project_id + "/collaborators/" + user_id, {});
                    };

                    module.remove_project_collaborator = function (project_id, user_id) {
                        return $http.delete("/api/projects/" + project_id + "/collaborators/" + user_id);
                    };

                    module.create_sprint = function(form, project_id)
                    {
                        var request =
                        {
                            status: form.status,
                            duration: form.duration.toString()
                        };
                        return $http.post("/api/projects/" + project_id + "/sprints", request);
                    };

                    module.project_sprints = function(project_id)
                    {
                        return $http.get("/api/projects/" + project_id + "/sprints")
                        .then
                        (
                            function (data)
                            {
                                return data.data;
                            }
                        )
                    };

                    module.project_tasks = function(project_id)
                    {
                        return $http.get("/api/projects/" + project_id + "/tasks")
                        .then
                        (
                            function (data)
                            {
                                console.log(data);
                                return data.data;
                            }
                        )
                    };

                    module.delete_project_task = function(project_id, task_id)
                    {
                        return $http.delete("/api/projects/" + project_id + "/tasks/" + task_id);
                    };

                    module.edit_project_task = function (form, project_id, sprint_id, task_id) {
                        var request =
                        {
                            title: form.title,
                            description: form.description,
                            priority: form.priority,
                            position: form.position,
                            points: form.points.toString(),
                            type: form.type,
                            sprint_id: sprint_id
                        };

                        return $http.post("/api/projects/" + project_id + "/tasks/" + task_id, request);
                    };

                    //////////////////////////////////////////////////////////////
                    ////////////////////// PRIVATE METHODS

                    return module;
                }
            ]
        )

        .factory
        (
            "errorHttpInterceptor",
            [
                "$q",
                "$rootScope",
                function($q, $rootScope)
                {
                    function onSuccess(response)
                    {
                        return response;
                    }

                    function onError(response)
                    {
                        if(response.status === 401)
                        {
                            $rootScope.$broadcast("event:loginRequired");
                        }
                        return $q.reject(response);
                    }

                    return function(promise)
                    {
                        return promise.then(onSuccess, onError);
                    };
                }
            ]
        );
    }
);
