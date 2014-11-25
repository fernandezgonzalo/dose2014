'use strict';

angular.module('Mgmt').service('FileUpload', ['$http', function ($http) {
    this.uploadFileToUrl = function(file, uploadUrl, success, error){
        var fd = new FormData();
        fd.append('file', file);
        $http.post(uploadUrl, fd, {
            transformRequest: angular.identity,
            headers: {'Content-Type': undefined}
        })
        .success(success)
        .error(error);
    };
}]);