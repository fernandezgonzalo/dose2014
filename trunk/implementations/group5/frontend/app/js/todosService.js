'use strict';

angular.module('Demo').service('Todos', ['$log', 'Users', function($log, Users) {
  this.maxId = 5;
  this.query = function() {
    return [{
        todoId: '2',
        description: 'Make coffee',
        userId: '1',
        name: 'John'
      }, {
        todoId: '3',
        description: 'Learn Angular',
        userId: '2',
        name: 'Mary'
      }, {
        todoId: '4',
        description: 'Learn Eiffel',
        userId: '3',
        name: 'Alice'
      }, {
        todoId: '5',
        description: 'Enjoy HTML',
        userId: '4',
        name: 'Bob'
    }];
  };

  this.delete = function(ids, success) {
    $log.debug('Success removing todo item');
    success();
  };

  var $this = this;
  this.create = function(payload, success) {
    $this.maxId++;
    var users = Users.query();
    var data = {
      todoId: $this.maxId,
      description: payload.description,
      userId: payload.userId
    };
    for (var i = 0; i < users.length; ++i) {
      if (users[i].id === payload.userId) {
        data.name = users[i].name;
        break;
      }
    }
    success(data);
  };

}]);