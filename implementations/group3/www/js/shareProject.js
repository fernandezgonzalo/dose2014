/**
 * Created by alan on 07/12/14.
 */
angular.module('LetsGoTeam').controller('ShareProjectCtrl', ['$scope', '$http', '$log', '$timeout',
    function ($scope, $http, $log, $timeout) {
        $scope.usersToShare = "";
        $scope.view = 1;
        $scope.usersInProject = [{id:3 ,firstName:'alan',LastName:'gonzalez',email:'a',password:'a'}];
        var usersArray = [];

        $scope.changeView = function (n){
            $scope.view = n;
        };
        $scope.isView = function (n){
            return $scope.view === n;
        };

        $scope.addUsers = function(u) {
            alert("caca");
            $scope.usersToShare = u;
            usersArray = $scope.usersToShare.split(",");
            var i;
            var j;
            for (i = 0; i < usersArray.length; i++){
                for (j = 0; i < users.length; j++){
                    if(usersArray[i] === users[j].email){
                        usersProjects.push({idProject: currentProject.id , idUser: users[j].id});
                    }
                }
            }
        }
    }]);