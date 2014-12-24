'use strict';

angular.module('LetsGoTeam').controller('SprintController', ['$scope', '$http', '$log', '$location', '$timeout',
    function($scope, $http, $log, $location, $timeout) {
        // the model that we bind to the input box
        $scope.data = {};
        $scope.statuses = [{
            stat: 'Future'
        }, {
            stat: 'Closed'
        }, {
            stat: 'Planned'
        }, {
            stat: 'In Progress'
        }];

        $scope.sprint = {
            name: '',
            startDate: new Date(),
            completionDate: new Date(),
            status: ''
        };

        $scope.successMsgVisible = false;

        $scope.addSprint = function(new_sprint) {

            $scope.sprint = new_sprint;

            if (!($scope.sprint.name === '')) {
                if (editing) {
                    $http.get('/projects/' + current_sprint.id.toString())
                        .success(function(data, status, headers, config) {
                            $scope.sprint = current_sprint = data;
                        })
                        .error(function(data, status, headers, config) {
                            alert("Requested sprint doesn't exists")
                            $location.path('/projectSprints')
                        })

                    editing = false;
                } else {
                    $http.post('/sprints', $scope.sprint)
                        .success(function(data, status, headers, config) {
                            console.log('Sprint added succesfully')
                            $location.path('/projectsSprints')
                        })
                        .error(function(data, status, headers, config) {
                            alert("Sprint with the name given already exists")
                        })
                }
                $location.path("/projectsSprints");
            } else {
                alert("You forgot to give your sprint a name!");
            }
        }
    }
]);