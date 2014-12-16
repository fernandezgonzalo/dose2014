#!/bin/bash
svn=https://dose2014.googlecode.com/svn/tags/group5-final-release
pushd /home/dose/dose2014
rm -rf .frontend_bak
mv frontend .frontend_bak
svn export $svn/frontend frontend --username dsteblyuk@gmail.com
pushd frontend
npm install
bower install
grunt
rm -Rf /var/www/html/*
mv www/* /var/www/html/
mv www/.htaccess /var/www/html/
popd
popd
