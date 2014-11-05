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
          devDependencies: true, // default is false
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

    },

    less: {
      production: {
        options: {
          paths: ['css'],
          cleancss: true
        },
        files: {
          'www/css/main.css': 'app/css/main.less'
        }
      }
    },

    // Empties folders to start fresh
    clean: {
      dist: {
        files: [{
          dot: true,
          src: [
            '.tmp',
            'www/*',
          ]
        }]
      },
      server: '.tmp'
    },

    // Reads HTML for usemin blocks to enable smart builds that automatically
    // concat, minify and revision files. Creates configurations in memory so
    // additional tasks can operate on them
    useminPrepare: {
      html: 'app/index.html',
      options: {
        dest: 'www'
      }
    },

    // Performs rewrites based on rev and the useminPrepare configuration
    usemin: {
      html: ['www/{,*/}*.html'],
      css: ['www/styles/{,*/}*.css'],
      options: {
        assetsDirs: ['www'],
        blockReplacements: {
          less: function (block) {
            return '<link rel="stylesheet" href="' + block.dest + '">';
          }
        }
      }
    },

    htmlmin: {
      dist: {
        options: {
          collapseWhitespace: true,
          collapseBooleanAttributes: true,
          removeCommentsFromCDATA: true,
          removeOptionalTags: true
        },
        files: [{
          expand: true,
          cwd: 'www',
          src: ['*.html', 'partials/{,*/}*.html'],
          dest: 'www'
        }]
      }
    },

    // Copies remaining files to places other tasks can use
    copy: {
      dist: {
        files: [{
          expand: true,
          dot: true,
          cwd: 'app',
          dest: 'www',
          src: [
            '*.{ico,png,txt}',
            '.htaccess',
            '*.html',
            'partials/{,*/}*.html',
            'images/{,*/}*.{webp}',

          ]
        }, {
          expand: true,
          cwd: '.tmp/images',
          dest: 'www/images',
          src: ['generated/*']
        }, {
          expand: true,
          dest: 'www/fonts',
          src: 'bower_components/bootstrup/*'
        }]
      },
      styles: {
        expand: true,
        cwd: 'app/css',
        dest: '.tmp/css/',
        src: '{,*/}*.css'
      }
    },
  });

  grunt.loadNpmTasks('grunt-contrib-clean');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-contrib-connect');
  grunt.loadNpmTasks('grunt-contrib-copy');
  grunt.loadNpmTasks('grunt-contrib-cssmin');
  grunt.loadNpmTasks('grunt-contrib-htmlmin');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-usemin');
  grunt.loadNpmTasks('grunt-wiredep');

  grunt.registerTask('server', ['jshint', 'wiredep', 'connect']);

  // this would be run by typing 'grunt test' on the command line
  // grunt.registerTask('test', ['jshint', 'qunit']);

  grunt.registerTask('build', [
    'jshint',
    'clean',
    'wiredep',
    'less:production',
    'useminPrepare',
    'concat',
    'copy',
    'cssmin',
    'uglify',
    'usemin',
    'htmlmin'
  ]);

  // the default task can be run just by typing 'grunt' on the command line
  grunt.registerTask('default', ['build']);
};