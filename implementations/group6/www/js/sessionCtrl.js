'use strict';

angular.module('Wbpms')
  .controller('SessionCtrl', ['$scope', '$http', '$log', 'UserData', //'$upload',
    function ($scope, $http, $log, UserData) {

        $scope.loginModel = UserData;

        $scope.newUser = {
            new_user_email : '',
            new_user_password : '',
            new_user_confirm_password : '',
            new_user_name : '',
            new_user_surname : '',
            new_user_gender : false,
            new_user_role : '',
            new_user_avatar: ''
        };
        
        $scope.roles = {
            "value": $scope.loginModel.role, 
            "values": ["Developer", "Project Manager", "Quality Assurance", "Business Analyst","Other"] 
        };

        $scope.changepassword = {
            new_password : '',
            confirm_password : ''
        }

        $scope.forgetPasswordEmail = '';
        //Log In info messagges //
        $scope.logInSuccessMsgVisible = false;
        $scope.logInErrorMsgVisible = false;
        //Sign Up info messagges //
        $scope.signUpSuccessMsgVisible = false;
        $scope.signUpErrorMsgVisible = false;
        //Log Out info messagges //
        $scope.logOutSuccessMsgVisible = false;
        $scope.logOutErrorMsgVisible = false;
        //Forget Password info messagges //
        $scope.forgetPasswordSuccessMsgVisible = false;
        $scope.forgetPasswordErrorMsgVisible = false;

        // declaration !AND! call (see parenthesis at end of function)
        // of a function that fetches the todos from the server
        $scope.init = function() {
            if($scope.loginModel.email != '')
                window.location.href = '#/home';
        };

        // Function login user.
        $scope.clear = function() {
            $scope.newUser.new_user_email = '';
            $scope.newUser.new_user_password = '',
            $scope.newUser.new_user_confirm_password = '',
            $scope.newUser.new_user_name = '';
            $scope.newUser.new_user_surname = '';
            $scope.newUser.new_user_gender = false;
            $scope.newUser.new_user_role = '';
        }

        $scope.checkLogIn = function(_loginModel){
            if(_loginModel.email != null && _loginModel.email !== '' && _loginModel.password != null && _loginModel.password !== '' && _loginModel.password.length >= 8)
                return true;
            else
                return false;
        }
    
/*        $scope.uploadFile = function(file) {
            var fd = new FormData();
            //Take the first selected file
            fd.append("file", file[0]);

            $http.post('', fd, {
                withCredentials: true,
                headers: {'Content-Type': undefined },
                transformRequest: angular.identity
            })
            .success(function(data, status, header, config) {
                $log.debug('Success file upload');                    
                $scope.loginModel.avatarpath = data.avatarpath;
            })
            .error(function(data, status) {
                $log.debug('Error while trying upload file');
            });
        };*/

        $scope.logIn = function(_loginModel) {
            // construct the payload that we will send as part of the post request
            if($scope.checkLogIn(_loginModel)){
                var payload = {
                    email : _loginModel.email,
                    password : _loginModel.password
                };
                $log.debug("Sending payload: " + JSON.stringify(payload));
                // send the payload to the server
                $http.post('/api/sessions', payload)
                .success(function(data, status, header, config) {
                    $log.debug('Success login user');
                    
                    $scope.loginModel.name = data.name;
                    $scope.loginModel.surname = data.surname;
                    $scope.loginModel.email = data.email;
                    $scope.loginModel.password = data.password;
                    $scope.loginModel.role = data.role;
                    $scope.loginModel.gender = data.gender;
                    $scope.loginModel.changepwd = data.changepwd;
                    if(data.gender == "male")
                        $scope.loginModel.avatar = 'img/male.png';
                    else
                        $scope.loginModel.avatar = 'img/female.png';
                    $scope.logInSuccessMsgVisible = true;
                    $scope.logInErrorMsgVisible = false;
                    //Sign Up info messagges //
                    $scope.signUpSuccessMsgVisible = false;
                    $scope.signUpErrorMsgVisible = false;
                    //Log Out info messagges //
                    $scope.logOutSuccessMsgVisible = false;
                    $scope.logOutErrorMsgVisible = false;
                    //Forget Password info messagges //
                    $scope.forgetPasswordSuccessMsgVisible = false;
                    $scope.forgetPasswordErrorMsgVisible = false;
                    window.location.href = '#/home';
                })
                .error(function(data, status) {
                    $log.debug('Error while trying login user');
                    $scope.logInSuccessMsgVisible = false;
                    $scope.logInErrorMsgVisible = true;
                    //Sign Up info messagges //
                    $scope.signUpSuccessMsgVisible = false;
                    $scope.signUpErrorMsgVisible = false;
                    //Log Out info messagges //
                    $scope.logOutSuccessMsgVisible = false;
                    $scope.logOutErrorMsgVisible = false;
                    //Forget Password info messagges //
                    $scope.forgetPasswordSuccessMsgVisible = false;
                    $scope.forgetPasswordErrorMsgVisible = false;
                });
            }else{
                $scope.logInSuccessMsgVisible = false;
                $scope.logInErrorMsgVisible = true;
                //Sign Up info messagges //
                $scope.signUpSuccessMsgVisible = false;
                $scope.signUpErrorMsgVisible = false;
                //Log Out info messagges //
                $scope.logOutSuccessMsgVisible = false;
                $scope.logOutErrorMsgVisible = false;
                //Forget Password info messagges //
                $scope.forgetPasswordSuccessMsgVisible = false;
                $scope.forgetPasswordErrorMsgVisible = false;   
            }
       }

        $scope.checkSingUp = function(_newUser){
            if(_newUser.new_user_email !== '' && _newUser.new_user_password !== '' && _newUser.new_user_password.length >= 8
                && _newUser.new_user_confirm_password === _newUser.new_user_password && _newUser.new_user_name !== '' && _newUser.new_user_surname !== '')
                return true;
            else
                return false;
        }

       $scope.singUp = function(_newUser) {
            if($scope.checkSingUp(_newUser)){
                var payload = {
                    email : _newUser.new_user_email,
                    password : _newUser.new_user_password,
                    name : _newUser.new_user_name,
                    surname : _newUser.new_user_surname,
                    gender : _newUser.new_user_gender,
                    role : _newUser.new_user_role,
                    photo : 'img/users_avatars/'+_newUser.new_user_username+'.png'
                }
                $log.debug("Sending payload: " + JSON.stringify(payload));
                // send the payload to the server
                $http.post('/api/users', payload)
                .success(function(data, status, header, config) {
                    $log.debug('Success adding new user');
                    $scope.logInSuccessMsgVisible = false;
                    $scope.logInErrorMsgVisible = false;
                    //Sign Up info messagges //
                    $scope.signUpSuccessMsgVisible = true;
                    $scope.signUpErrorMsgVisible = false;
                    //Log Out info messagges //
                    $scope.logOutSuccessMsgVisible = false;
                    $scope.logOutErrorMsgVisible = false;
                    //Forget Password info messagges //
                    $scope.forgetPasswordSuccessMsgVisible = false;
                    $scope.forgetPasswordErrorMsgVisible = false;
                    $scope.clear();
                })
                .error(function(data, status) {
                    $log.debug('Error while trying to add new user');
                    $scope.logInSuccessMsgVisible = false;
                    $scope.logInErrorMsgVisible = false;
                    //Sign Up info messagges //
                    $scope.signUpSuccessMsgVisible = false;
                    $scope.signUpErrorMsgVisible = true;
                    //Log Out info messagges //
                    $scope.logOutSuccessMsgVisible = false;
                    $scope.logOutErrorMsgVisible = false;
                    //Forget Password info messagges //
                    $scope.forgetPasswordSuccessMsgVisible = false;
                    $scope.forgetPasswordErrorMsgVisible = false;
                });
            }else{
                $scope.logInSuccessMsgVisible = false;
                $scope.logInErrorMsgVisible = false;
                //Sign Up info messagges //
                $scope.signUpSuccessMsgVisible = false;
                $scope.signUpErrorMsgVisible = true;
                //Log Out info messagges //
                $scope.logOutSuccessMsgVisible = false;
                $scope.logOutErrorMsgVisible = false;
                //Forget Password info messagges //
                $scope.forgetPasswordSuccessMsgVisible = false;
                $scope.forgetPasswordErrorMsgVisible = false;
            }
       }
       
       $scope.logout = function() {
            $http.post('/api/sessions/logout')
            .success(function(data, status, header, config) {
                $log.debug('Success logout user');
                $scope.logInSuccessMsgVisible = false;
                $scope.logInErrorMsgVisible = false;
                //Sign Up info messagges //
                $scope.signUpSuccessMsgVisible = false;
                $scope.signUpErrorMsgVisible = false;
                //Log Out info messagges //
                $scope.logOutSuccessMsgVisible = true;
                $scope.logOutErrorMsgVisible = false;
                //Forget Password info messagges //
                $scope.forgetPasswordSuccessMsgVisible = false;
                $scope.forgetPasswordErrorMsgVisible = false;
                $scope.loginModel.email = '';
                $scope.loginModel.password = '';
                $scope.loginModel.name = '';
                $scope.loginModel.surname = '';
                $scope.loginModel.gender = '';
                $scope.loginModel.role = '';
                $scope.loginModel.changepwd = false;
                $scope.loginModel.avatar = '';
                window.location.href = '#/login';
            })
            .error(function(data, status) {
                $log.debug('Error while trying logout user');
                $scope.logInSuccessMsgVisible = false;
                $scope.logInErrorMsgVisible = false;
                //Sign Up info messagges //
                $scope.signUpSuccessMsgVisible = false;
                $scope.signUpErrorMsgVisible = false;
                //Log Out info messagges //
                $scope.logOutSuccessMsgVisible = false;
                $scope.logOutErrorMsgVisible = true;
                //Forget Password info messagges //
                $scope.forgetPasswordSuccessMsgVisible = false;
                $scope.forgetPasswordErrorMsgVisible = false;
            });
       }
       
       $scope.forgetPassword = function(userEmail) {
            var payload = {
                email : userEmail,
            }
            $http.post('/api/sessions', payload)
            .success(function(data, status, header, config) {
                $log.debug('Success send password email');
                $scope.logInSuccessMsgVisible = false;
                $scope.logInErrorMsgVisible = false;
                //Sign Up info messagges //
                $scope.signUpSuccessMsgVisible = false;
                $scope.signUpErrorMsgVisible = false;
                //Log Out info messagges //
                $scope.logOutSuccessMsgVisible = false;
                $scope.logOutErrorMsgVisible = false;
                //Forget Password info messagges //
                $scope.forgetPasswordSuccessMsgVisible = true;
                $scope.forgetPasswordErrorMsgVisible = false;
            })
            .error(function(data, status) {
                $log.debug('Error while trying sending password email');
                $scope.logInSuccessMsgVisible = false;
                $scope.logInErrorMsgVisible = false;
                //Sign Up info messagges //
                $scope.signUpSuccessMsgVisible = false;
                $scope.signUpErrorMsgVisible = false;
                //Log Out info messagges //
                $scope.logOutSuccessMsgVisible = false;
                $scope.logOutErrorMsgVisible = false;
                //Forget Password info messagges //
                $scope.forgetPasswordSuccessMsgVisible = false;
                $scope.forgetPasswordErrorMsgVisible = true;
            });
       }

       $scope.updateUser = function(){
            var payload = {
                name : $scope.loginModel.name,
                surname : $scope.loginModel.surname,
                role : $scope.loginModel.role,
                photo : $scope.loginModel.avatar
            }
            $http.post('/api/users/update', payload)
            .success(function(data, status, header, config) {
                $log.debug('Success modifed user');
                alert("User Information Update");

            })
            .error(function(data, status) {
                $log.debug('Error while trying modifed user');
                alert("Error System Can't Update Information");
            });
       }



       $scope.checkupdatePasswordUser = function(_changepassword){
            if(_changepassword.new_password == _changepassword.confirm_password && _changepassword.new_password !== '' && _changepassword.new_password.length >= 8)
                return true;
            else
                return false;
        }

        $scope.updatePasswordUser = function(_changepassword){
            if($scope.checkupdatePasswordUser(_changepassword)){
                var payload = {
                    email : $scope.loginModel.email,
                    new_password: _changepassword.new_password
                }
                $http.post('/api/users/changepassword', payload)
                .success(function(data, status, header, config) {
                    $log.debug('Success modifed user');
                    alert("User Password Update")

                })
                .error(function(data, status) {
                    $log.debug('Error while trying modifed password user');
                });
            }else{
                alert("Error System Can't Update Password");
            }
       }

        $scope.deleteUser = function(){   
            $http.post('/api/users/delete')
            .success(function(data, status, header, config) {
                $log.debug('Success modifed user');
                alert("User Delete")
                $scope.logInSuccessMsgVisible = false;
                $scope.logInErrorMsgVisible = false;
                //Sign Up info messagges //
                $scope.signUpSuccessMsgVisible = false;
                $scope.signUpErrorMsgVisible = false;
                //Log Out info messagges //
                $scope.logOutSuccessMsgVisible = true;
                $scope.logOutErrorMsgVisible = false;
                //Forget Password info messagges //
                $scope.forgetPasswordSuccessMsgVisible = false;
                $scope.forgetPasswordErrorMsgVisible = false;
                $scope.loginModel.email = '';
                $scope.loginModel.password = '';
                $scope.loginModel.name = '';
                $scope.loginModel.surname = '';
                $scope.loginModel.gender = '';
                $scope.loginModel.role = '';
                $scope.loginModel.changepwd = false;
                $scope.loginModel.avatar = '';
                window.location.href = '#/login';

            })
            .error(function(data, status) {
                $log.debug('Error while trying delete user');
            });
       }
    }
]);