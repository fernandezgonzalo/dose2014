'use strict';

angular.module('Mgmt').directive('doseIsUniqueUser', [function() {
  return {
    restrict: 'A',
    require: 'ngModel',
    link: function(scope, element, attrs, ctrl) {

      element.bind('change', function() {
        var users = scope.users;
        var attr = attrs.doseIsUniqueUser;
        var isUnique = true;
        for (var i in users) {
          var user = users[i];
          if (!scope.user.id || scope.user.id !== user.id) {
            if (element.val() === user[attr]) {
              isUnique = false;
              break;
            }
          }
        }
        scope.$apply(function() {
          if (isUnique) {
            ctrl.$setValidity('isUniqueUser', true);
          } else {
            ctrl.$setValidity('isUniqueUser', false);
          }
        });
      });
      
    }
  };
}]);