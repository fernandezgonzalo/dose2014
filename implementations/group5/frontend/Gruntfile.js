'use strict';

module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),

    wiredep: {

      task: {

        // Point to the files that should be updated when
        // you run `grunt wiredep`
        src: [
          'app/index.html',   // .html support...
        ],

        options: {
          // See wiredep's configuration documentation for the options
          // you may pass:

          // https://github.com/taptapship/wiredep#configuration
          // devDependencies: true, // default is false
        }
      }
    },

    connect: {
      server: {
        options: {
          port: 9090,
          base: 'app',
          keepalive: true
        }
      }
    },

    jshint: {
      options: {
        jshintrc: '.jshintrc',
        reporter: require('jshint-stylish')
      },
      // define the files to lint
      files: ['Gruntfile.js', 'app/js/*.js', 'test/**/*.js']  
      // configure JSHint (documented at http://www.jshint.com/docs/)

    }

  });

  grunt.loadNpmTasks('grunt-contrib-connect');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-wiredep');

  grunt.registerTask('server', ['jshint', 'wiredep', 'connect']);

  // this would be run by typing "grunt test" on the command line
  // grunt.registerTask('test', ['jshint', 'qunit']);

  // the default task can be run just by typing "grunt" on the command line
  grunt.registerTask('default', ['jshint', 'wiredep']);
};	