/**
 * Created by andrew on 24.05.14.
 */

define(
    [
        //System includes
        "angular"
    ],

    function (angular) {
        return angular.module("HelperModule", [])

        .factory
        (
            "taskHelper",
            [
                function()
                {

                    var service = {};

                    service.get_style = function(task)
                    {
                        var opacity = "1.0";
                        var background = undefined;

                        if(task.priority == "Low")
                        {
                            opacity = "0.4";
                        }
                        else if (task.priority == "Normal")
                        {
                            opacity = "0.6";
                        }
                        else if (task.priority == "High")
                        {
                            opacity = "0.8";
                        }

                        if(task.type == "Feature")
                        {
                            background = "rgba(108, 163, 64, " + opacity + ")";
                        }
                        else if (task.type == "Bug")
                        {
                            background = "rgba(201, 36, 36, " + opacity + ")";
                        }

                        return {
                            "background-color": background,
                            "color": "black"
                        };
                    };
                    return service;
                }
            ]
        );
    }
);
