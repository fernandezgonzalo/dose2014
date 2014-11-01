# Quick info
This demo shows a simple TODO app using
* Eiffel Web Framework (EWF)
* SQLITE
* AngularJS
* Bootstrap for CSS and layout

# Requirements
We've used EiffelStudio 14.05.
All dependencies should come with the installtion of EiffelStudio.

# How to setup
1. Open the demo.ecf file.

2. Adapt the two fixed path in application.e for access to the database file and the www folder.

3. Run the Eiffel server.

4. Open your browser at http://localhost:9090

5. You should now see the Todo app.

# Notes
This is a very simple demo that tries to show the basic
workings of EWF and Angular and aims for easy-of-read.
For a larger application, many things can be implemented more efficiently
in Eiffel but also in Angular.

Also note that during development with EWF, we're using
Nino, a web-server written in Eiffel. Nino is single-threaded
and thus you can only ever server one request at a time.
For acutal deployoment, we'll use the Eiffel server app on an
Apache server with FCGI. At that point, performance will be
much higher.



