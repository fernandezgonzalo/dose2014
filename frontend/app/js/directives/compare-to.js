'use strict';

angular.module('Mgmt').directive('compareTo', function() {
  return {
    require: 'ngModel',
    link: function (scope, elem, attrs, ctrl) {
      var firstPassword = '#' + attrs.compareTo;
      elem.add(firstPassword).on('keyup', function () {
        scope.$apply(function () {
          var v = elem.val()===$(firstPassword).val();
          
          ctrl.$setValidity('pwmatch', v);
        });
      });
    }
  };
});