'use strict';

angular.module('Mgmt').service('User', [function() {

  this.users = [
      {
        id: '1',
        email: 'guest@gmail.com',
        username: 'guest',
        name: 'Guest guy',
        lastLogin: 'December, 10 2014 00:35'
      }, {
        id: '2',
        email: 'dsteblyuk@gmail.com',
        username: 'n43jl',
        name: 'Дмитрий Стеблюк',
        lastLogin: 'December, 10 2014 00:35'
      }, {
        id: '3',
        email: 'palaciodelgado@gmail.com',
        username: 'MiguelPalacio',
        name: 'Miguel Palacio',
        lastLogin: 'December, 10 2014 00:35'
      }, {
        id: '4',
        email: 'gabriele.madd@gmail.com',
        username: 'GabrieleMaddalena',
        name: 'Gabriele Maddalena',
        lastLogin: 'December, 10 2014 00:35'
      }];


  this.query = function() {
    return this.users;
  };

  this.add = function(user) {
    this.users.push(user);
  };

}]);