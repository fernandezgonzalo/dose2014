#!/bin/bash
pushd /home/dose/dose2014
svn update
pushd frontend
bower install
grunt
rm -Rf /var/www/html/*
mv www/* /var/www/html/
mv www/.htaccess /var/www/html/
popd
popd
