'use strict';

angular.module('Mgmt').service('Datepicker', function() {  

  this.set = function(datepicker, dateAttribute) {
    
    datepicker.today = function() {
      datepicker.minDate = new Date();
      dateAttribute = new Date();
    };
    datepicker.today();

    // Disable weekend selection
    datepicker.disabled = function(date, mode) {
      return ( mode === 'day' && ( date.getDay() === 0 || date.getDay() === 6 ) );
    };

    datepicker.open = function($event) {
      $event.preventDefault();
      $event.stopPropagation();

      datepicker.opened = true;
    };

    datepicker.dateOptions = {
      formatYear: 'yy',
      startingDay: 1
    };

    datepicker.format = 'yyyy-MM-dd';

  };
});

