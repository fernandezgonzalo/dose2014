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
    }
  });

  grunt.loadNpmTasks('grunt-wiredep');

  // this would be run by typing "grunt test" on the command line
  // grunt.registerTask('test', ['jshint', 'qunit']);

  // the default task can be run just by typing "grunt" on the command line
  grunt.registerTask('default', ['wiredep']);
};	