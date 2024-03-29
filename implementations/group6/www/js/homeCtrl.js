'use strict';

angular.module('Wbpms')
  .controller('HomeCtrl', ['$scope', '$http', '$log', 'UserData', 'ProjectData', 'IterationData', 'ViewHomeData', 'SearchMemberData',
    function ($scope, $http, $log, UserData, ProjectData, IterationData, ViewHomeData, SearchMemberData) {
	
        //Global User Data
        $scope.usuario = UserData;  

        //Global Project Data
        $scope.proyecto = ProjectData;  

        //Global Iteration Data
        $scope.iteracion = IterationData;  

        //Global Search Member Data        
        $scope.searchData = ViewHomeData;

        $scope.memberToShow = SearchMemberData;

        $scope.projects = [];    

        $scope.iterations = [];           

        $scope.workitems = [];        

        $scope.members = [];                            

        // declaration !AND! call (see parenthesis at end of function)
        // of a function that fetches the projects from the server
        $scope.init = function() {
        // Get all projects of a User

          if($scope.usuario.email === '')
              window.location.href = '#/login';
          else 
              // send the payload to the server
              $http.post('/api/users/getprojects')                  
                .success(function(data, status, header, config) {
                  $scope.projects = data[0].projects;   
                })  
                .error(function(data, status) {
                }); 
        
        }    

        $scope.loadIterations = function(project_name){

        // List all iterations of each project
          var payload2 = {
              project_name : project_name
          };

          // send the payload to the server
          $http.post('/api/projects/iterations/getprojectiterations', payload2)                  
            .success(function(data, status, header, config) {
              $scope.iterations.iterations = data[0].iterations;
              $scope.iterations.project = project_name;              
            })  
            .error(function(data, status) {
            });                

        }

        $scope.loadWorkItems = function(project_name, iteration_number){

          // List all work Items of an iteration
          var payload3 = {
            project_name : project_name,
            iteration_number : iteration_number
          }

          // send the payload to the server
          $http.post('/api/projects/iterations/getworkitems', payload3)                  
            .success(function(data, status, header, config) {
              $scope.workitems.workitems = data[0].workitems;
              $scope.workitems.project = project_name;                            
              $scope.workitems.iteration = iteration_number;                                          
          })
            .error(function(data, status) {
          });                

        }     

        $scope.loadMembers = function(project_name){

          // List all members of each project
          var payload4 = {
            project_name_id : project_name
          }

          // send the payload to the server
          $http.post('/api/projects/getmembers', payload4)                  
            .success(function(data, status, header, config) {
              $scope.members.members = data[0].members;
              $scope.members.project = project_name;
          })
            .error(function(data, status) {
          });                

        }   

        $scope.goToWorkItems = function(project_name, iteration_number, title, points) {
        // Go to Work Items 
    
          $scope.proyecto.project_name = project_name; 
          $scope.iteracion.id_iteration = iteration_number;    
          $scope.iteracion.title_iteration = title;
          $scope.iteracion.point_iteration = points;                

          window.location.href = '#/projects/iterations/work_items';          
    
        }  

        $scope.goToMembers = function(project_name, memberEmail, memberName, memberSurname) {
        // Go to Members 
    
          $scope.proyecto.project_name = project_name; 

          $scope.searchData.email = memberEmail;
          $scope.searchData.name = memberName;
          $scope.searchData.surname = memberSurname;

          $scope.memberToShow.name = '';   
          $scope.memberToShow.surname = '';
          $scope.memberToShow.email = '';
          $scope.memberToShow.gender = '';
          $scope.memberToShow.role = '';
          $scope.memberToShow.avatar = '';          

          window.location.href = '#/projects/members/view';          
    
        }  
        
    }
  ]);