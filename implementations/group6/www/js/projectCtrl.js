'use strict';

angular.module('Wbpms')
  .controller('ProjectCtrl', ['$scope', '$http', '$log', 'UserData', 'ProjectData',
    function ($scope, $http, $log, UserData, ProjectData) {	

        $scope.usuario = UserData;  

        $scope.proyecto = ProjectData;            
        
        // $scope.projects = [{
        //     description:'Project1',
        //     point:'100'}, 
        //     {
        //     description:'Project2',
        //     point:'200'},
        //     {
        //     description:'Project3',
        //     point:'300'},
        //     {
        //     description:'Project4',
        //     point:'400'},
        //     {
        //     description:'Project5',
        //     point:'500'}            
        // ];

        // we store all data in the data array
        $scope.projects = [];
                           
        $scope.projectModel = [{
            description: '',
            point: ''
        }];
        
        $scope.newProject = {
            new_project_name : ''
        }        

        $scope.newNameProject = {
            old_project_name : '',
            new_new_project_name : ''
        }             

        $scope.delProject = {
            project_name : ''
        }        

        
        // declaration !AND! call (see parenthesis at end of function)
        // of a function that fetches the projects from the server
        $scope.init = function() {
        // Get all projects of a User
          
          var payload = {
              user_email_id : $scope.usuario.email
          }

          $log.debug("Sending payload: " + JSON.stringify(payload));

          // send the payload to the server
          $http.get('/api/users/projects', payload)                  
            .success(function(data, status, header, config) {
              $log.debug('Success fetching projects from server');
              $scope.projects = data[0].projects;
              alert(JSON.stringify(data));
            })
            .error(function(data, status) {
              $log.debug('Error while fetching projects from server');
            }); 
        
        }    

        
        $scope.addProject = function(projectName) {
		    // Add a new project          
        
          var payload = {
              project_name : projectName
          }     

          $log.debug("Sending payload: " + JSON.stringify(payload));

          // send the payload to the server
          $http.post('/api/projects', payload)
            .success(function(data, status, header, config) {
              $log.debug('Success adding new project');
              $scope.projects.push(data)
            })          

            .error(function(data, status) {
              $log.debug('Error while trying to add new project');
            });	           
		
        }	 


        $scope.renameProject = function(oldnameProject,newnameProject) {
        // Rename a new project 
    
          var payload = {
              old_project_name : oldnameProject,
              new_project_name : newnameProject
          }

          $log.debug("Sending payload: " + JSON.stringify(payload));

          // send the payload to the server
          $http.post('api/projects/'+oldnameProject, payload)
            .success(function(data, status, header, config) {
              $log.debug('Success rename project');
              alert("The Project was renamed");              
            })
            .error(function(data, status) {
              $log.debug('Error while trying to rename new project');
            });             
    
        }        

	  
        $scope.removeProject = function(delnameProject) {
		    // Remove a new project	
    
          var payload = {
              project_name_id : delnameProject
          }

          $log.debug("Sending payload: " + JSON.stringify(payload));

          // send the payload to the server
          $http.delete('api/projects/'+delnameProject, payload)
            .success(function(data, status, header, config) {
              $log.debug('Success remove project');
              alert("The Project was deleted");                
            })
            .error(function(data, status) {
              $log.debug('Error while trying to remove new project');
            });		         
		
        }	


        $scope.goToIterations = function(project_name) {
        // Go to Iterations 
    
          $scope.proyecto.project_name = project_name; 

          window.location.href = '#/projects/iterations';          
    
        }         

        $scope.goToWorkItems = function(project_name) {
        // Go to Work Items 
    
          $scope.proyecto.project_name = project_name; 

          window.location.href = '#/projects/iterations/work_items';          
    
        }  

        $scope.goToMembers = function(project_name) {
        // Go to Members 
    
          $scope.proyecto.project_name = project_name; 

          window.location.href = '#/projects/members';          
    
        }                      
        
    }
  ]);