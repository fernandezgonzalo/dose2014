/**
 * Created by agustin on 04/12/14.
 */
'use strict';

angular.module('LetsGoTeam').controller('projectController', ['$scope', '$http', '$log', '$location', '$timeout',
    function($scope, $http, $log, $location, $timeout) {
        // the model that we bind to the input box
        $scope.data = {};
        $scope.curr_name = currentUser.name;
        $scope.project = {
            name: '',
            owner: '',
            status: {},
            startDate: new Date()
        };
        $scope.usersInProject = [];
        $scope.statuses = [{
            stat: 'open'
        }, {
            stat: 'closed'
        }];

        $scope.successMsgVisible = false;

        $scope.addProject = function(newProject) {

            $scope.project = newProject;

            if (!($scope.project.name === '')) {
                if (editing) {
		    $http.get('/projects/' + currProject.id.toString())
			.success(function(data, status, headers, config) {
				$scope.project = currProject = data;		
			})
			.error(function(data, status, headers, config) {
				alert("Requested project doesn't exists")
				$location.path('/projectSprints')				
			})
			
                    editing = false;
                } else {
		    $http.post('/projects/' + currProject.id.toString(), $scope.project)
			.success(function(data, status, headers, config) {
				console.log('Project added succesfully')
				$location.path('/projectSprints')				
			})
			.error(function(data, status, headers, config) {
				alert("Project with the name given already exists")
			})

                }
                $location.path("/projectsSprints");
            } else {
                alert("You forgot to give your project a name!");
            }

        }
    }
]);
