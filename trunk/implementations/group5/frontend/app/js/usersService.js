'use strict';

angular.module('Demo').service('Users', function() {
  this.query = function() {
    return [{
        id: "1",
        name: "John"
      }, {
        id: "2",
        name: "Mary"
      }, {
        id: "3",
        name: "Alice"
      }, {
        id: "4",
        name: "Bob"
      }, {
        id: "5",
        name: "qewrty"
      }, {
        id: "6",
        name: "another user"
    }];
  };

  this.create = function(payload, success) {
    success();
  };
});