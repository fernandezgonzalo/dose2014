'use strict';

angular.module('Mgmt').service('User', [function() {

  this.query = function() {
    return [{
        id: '1',
        email: 'dsteblyuk@gmail.com',
        username: 'n43jl',
        name: 'Дмитрий Стеблюк',
        lastLogin: 'December, 10 2014 00:35'
      }, {
        id: '2',
        email: 'guest@gmail.com',
        username: 'guest',
        name: 'Guest guy',
        lastLogin: 'December, 10 2014 00:35'
      },
      ];
  };
}]);