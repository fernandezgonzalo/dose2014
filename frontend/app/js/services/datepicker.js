'use strict';

angular.module('Mgmt').service('Datepicker', function() {  

  this.set = function(scope) {
    
    scope.today = function() {
      scope.dt = new Date();
    };
    scope.today();

    // scope.clear = function() {
      // scope.dt = new Date();
      // scope.dt = null;
    // };

    // Disable weekend selection
    scope.disabled = function(date, mode) {
      return ( mode === 'day' && ( date.getDay() === 0 || date.getDay() === 6 ) );
    };

    scope.open = function($event) {
      $event.preventDefault();
      $event.stopPropagation();

      scope.opened = true;
    };

    scope.dateOptions = {
      formatYear: 'yy',
      startingDay: 1
    };

    // scope.formats = ['dd-MMMM-yyyy', 'yyyy/MM/dd', 'dd-MM-yyyy', 'shortDate'];
    // scope.format = scope.formats[2];
    
    scope.format = 'dd-MM-yyyy';

  };
});

