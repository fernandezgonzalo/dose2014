'use strict';

angular.module('Mgmt').directive('fileModel', ['$parse', function ($parse) {
    return {
        restrict: 'A',
        link: function(scope, element, attrs) {
            var model = $parse(attrs.fileModel);
            var modelSetter = model.assign;
            
            element.bind('change', function() {
                if (scope.$parent) {
                    scope.$parent.$apply(function() {
                        modelSetter(scope.$parent, element[0].files[0]);
                    });
                } else {
                    scope.$apply(function() {
                        modelSetter(scope, element[0].files[0]);
                    });
                }

            });
        }
    };
}]);