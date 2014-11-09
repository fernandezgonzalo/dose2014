#!/bin/bash
# Prerequisites:
# sudo apt-get install npm subversion git
# sudo ln -s /usr/bin/nodejs /usr/bin/node # fix ubuntu npm installation bug
pushd /home/dose/dose2014
rm -rf .frontend_bak
mv frontend .frontend_bak
svn export https://dose2014.googlecode.com/svn/trunk/implementations/group5/frontend frontend --username dsteblyuk@gmail.com
pushd frontend
npm install
bower install
grunt
popd
popd
