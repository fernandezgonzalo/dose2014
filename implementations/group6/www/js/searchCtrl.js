'use strict';

angular.module('Wbpms')
  .controller('SearchCtrl', ['$scope', '$http', '$log',
    function ($scope, $http, $log) {
        
        
    $scope.globalSearch = {
        url: ''
    }
    // declaration !AND! call (see parenthesis at end of function)
    // of a function that fetches the todos from the server
    var init = function() {

    }
                
    //search global other user. pre-condition: User is login  
    $scope.globalOtherUserSearch = function(user,keyword){
        
        var payload = {
                user : username,
                password : keyword
            }

        $http.get('/api/search/', payload)
          .success(function(data, status, header, config) {
            // the server should return a json array which contains the uri redirection
            $scope.globalSearch = data;
          })
          .error(function(data, status) {
            $log.debug('Error user not found');
          });
    }
    
    //search global work item. pre-condition: User is login 
     $scope.globalWorkItemSearch = function(workItem,keyword){
         
         var payload = {
                workItem : work_Item,
                password : keyword
            }
         

        $http.get('/api/search/', payload)
          .success(function(data, status, header, config) {
            // the server should return a json array which contains the uri to redirection
            $scope.globalSearch = data;
          })
          .error(function(data, status) {
            $log.debug('Error workItem not found');
          });
    }
}]);
}]);