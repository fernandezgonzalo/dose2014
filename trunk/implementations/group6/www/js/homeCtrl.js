'use strict';

angular.module('Wbpms')
  .controller('HomeCtrl', ['$scope', '$http', '$log', 'UserData', 'ProjectData', 'IterationData',
    function ($scope, $http, $log, UserData, ProjectData, IterationData) {
	
        //Global User Data
        $scope.usuario = UserData;  

        //Global Project Data
        $scope.proyecto = ProjectData;  

        //Global Iteration Data
        $scope.iteracion = IterationData;          

        $scope.projects = [];    

        $scope.projectos = [];         

        $scope.iterations = [];           

        $scope.work_Items = [];        

        $scope.members = [];

        // declaration !AND! call (see parenthesis at end of function)
        // of a function that fetches the projects from the server
        $scope.init = function() {
        // Get all projects of a User
          
          var payload = {
              user_email_id : $scope.usuario.email
          }

          // send the payload to the server
          $http.post('/api/users/getprojects', payload)                  
            .success(function(data, status, header, config) {
              $scope.projectos = data[0].projects;             

              for(var i =0; i < $scope.projectos.length; i++) {

                // List all members of each project
                var payload4 = {
                  project_name_id : $scope.projectos[i].project_name
                };

                // List all iterations of each project
                var _iterations = [];

                // send the payload to the server
                $http.post('/api/projects/iterations/getprojectiterations', payload4)                  
                  .success(function(data, status, header, config) {
                    $scope.iterations = data[0].iterations;    

                    for(var j =0; j < $scope.iterations.length; j++) {

                      // List all members of each project
                      var payload3 = {
                        project_name : payload4.project_name,
                        iteration_number : $scope.iterations[j].iteration_number
                      }

                      var _workItems = [];

                      // send the payload to the server
                      $http.post('api/projects/iterations/getworkitems', payload3)                  
                        .success(function(data, status, header, config) {
                          _workItems = data[0].work_Items;                           
                      })

                      var aux2 = {
                         iteration_title: $scope.iterations[j].title,
                         iteration_points: $scope.iterations[j].points,
                         work_Items: _workItems
                       }

                        _iterations.push(aux2);

                    }

                  })

                var _members = [];

                  // send the payload to the server
                $http.post('/api/projects/getmembers', payload4)                  
                  .success(function(data, status, header, config) {
                    _members = data[0].members;                      
                  })  
                    
                var aux = {
                  project_name: $scope.projectos[i].project_name,
                  project_points: $scope.projectos[i].points,                  
                  iterations: _iterations,
                  members: _members
                }  
  
                $scope.projects.push(aux);
              } 
              alert(JSON.stringify($scope.projects));
            })            
            .error(function(data, status) {
              $log.debug('Error while fetching projects from server');
            });
          }    

        $scope.goToWorkItems = function(project_name, iteration_number) {
        // Go to Work Items 
    
          $scope.proyecto.project_name = project_name; 
          $scope.iteracion.id_iteration = iteration_number;          

          window.location.href = '#/projects/iterations/work_items';          
    
        }  

        $scope.goToMembers = function(project_name) {
        // Go to Members 
    
          $scope.proyecto.project_name = project_name; 

          window.location.href = '#/projects/members';          
    
        }  
        
    }
  ]);