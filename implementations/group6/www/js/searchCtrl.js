'use strict';

angular.module('Wbpms')
  .controller('SearchCtrl', ['$scope', '$http', '$log',
    function ($scope, $http, $log) {
        
        
        $scope.searchItem{
            search: ''
        }
      // declaration !AND! call (see parenthesis at end of function)
      // of a function that fetches the todos from the server
      var init = function() {
           $http.get('/api/search/'+keyword)
          .success(function(data, status, header, config) {
            
            // the server should return a json array which contains all the todos
            $scope.searchItem = data;
          });
          
          
        //search global other user. pre-condition: User is login  
        $scope.searchGlobalOtherUser = function(){
        
        
        }
        
        
        //leer bien la diferencia de los search 6.4, 6.5
        
  ]);