'use strict';

angular.module('Mgmt').controller('TaskController', ['$scope', '$log', '$location', '$routeParams','$filter', 'Task', 'User', 'Utility',
  function ($scope, $log, $location, $routeParams, $filter, Task, User, Utility) {

  var TAG = 'TaskController::';
  $log.debug(TAG, 'init', $routeParams, $scope.userTasks);

  $scope.currentTask = {};
  $scope.isNew = false;
  $scope.tasksFinished = [];
  $scope.tasksInProgress = [];
  $scope.statuses = [
    {value: 'created', text: 'Created'},
    {value: 'in_progress', text: 'In progress'},
    {value: 'stopped', text: 'Stopped'},
    {value: 'finished', text: 'Finished'}
  ];
  $scope.priorities = [
    {value: 'low', text: 'Low'},
    {value: 'high', text: 'High'},
    {value: 'critical', text: 'Critical'}
  ];
  $scope.userSelect = [];

  var onload = function() {
    $scope.currentUser.$getTasks(function(data){
      $scope.userTasks = data;
      $log.debug(TAG, data);
      var stoppedTask = 0;
      for (var task in $scope.userTasks.data) {
      	if ($scope.userTasks.data[task].status === 'stopped') { stoppedTask++; }
        if ($scope.userTasks.data[task].status === 'finished') {
          $scope.tasksFinished.push($scope.userTasks.data[task]);
        } else {
          $scope.tasksInProgress.push($scope.userTasks.data[task]);
        }
      }
      $scope.finTasksOnTot = ($scope.tasksFinished.length / data.data.length * 100).toFixed(2);
      $scope.stopTasksOnTot = (stoppedTask / data.data.length * 100).toFixed(2);
    });
  };

  if ($scope.currentUser) {
    onload();
  } else {
    $scope.onloadListeners.push(onload);
    $log.debug(TAG, 'onloadlisteners: ', $scope.onloadListeners);
  }

  User.query(function(allUsers){
    for (var i = 0; i < allUsers.length; i++) {
      $scope.userSelect.push({value: allUsers[i].id, text: allUsers[i].username});
    }
    $log.debug('ecco la user selection', $scope.userSelect);
  });

  $scope.createTask = function(projectId) {
    $scope.currentTask = new Task();
    $scope.currentTask.idUserCreator = $scope.currentUser.id;
    $scope.currentTask.idProject = projectId;
    $scope.currentTask.status = 'created';
    $scope.currentTask.priority = 'low';
    Utility.toUnderscore($scope.currentTask);
    $scope.isNew = true;

    $log.debug('new task content', $scope.currentTask);
  };

  $scope.openTask = function(task) {
        $scope.currentTask = new Task(task);
  };

  $scope.updateTask = function(){
    Utility.toUnderscore($scope.currentTask);
    $log.debug($scope.currentTask);
    if ($scope.isNew){
      $scope.currentTask.$save(function(){
        $scope.isNew = false;
        $log.debug('current task pushing', $scope.currentTask);
        $scope.tasksInProgress.push($scope.currentTask);
        $('#taskModal').modal('hide');
      });
    } else {
      $scope.currentTask.$update();
      $('#taskModal').modal('hide');
    }
    
  };

  $scope.deleteTask = function(){
    $scope.currentTask.$delete();
  };

  $scope.openProjectDash = function($event, projectId) {
    $location.path('/projects/'+ projectId +'/dashboard');
    $event.stopPropagation();
  };

  $scope.showStatus = function() {
      var selected = $filter('filter')($scope.statuses, {value: $scope.currentTask.status});
      return ($scope.currentTask.status && selected.length) ? selected[0].text : 'Not set';
  };
  
  $scope.showPriority = function() {
      var selected = $filter('filter')($scope.priorities, {value: $scope.currentTask.priority});
      return ($scope.currentTask.priority && selected.length) ? selected[0].text : 'Not set';
  };

  $scope.showUsers = function() {
    //var thisTask = new Task($scope.currentTask);
      Utility.toCamel($scope.currentTask);
      var selected = $filter('filter')($scope.userSelect, {value: $scope.currentTask.idUserAssigned});
      var result = ($scope.currentTask.idUserAssigned && selected.length) ? selected[0].text : 'Not set';
      Utility.toUnderscore($scope.currentTask);
      return result;
  };

  $scope.setPriorityClass = function(task) {
    if (task.priority === 'low') {return 'success';}
    if (task.priority === 'high') {return 'warning';}
    if (task.priority === 'critical') {return 'danger';}
  };

 }]);