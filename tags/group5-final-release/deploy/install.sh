#!/bin/bash
# BACKEND
sudo adduser dose
sudo add-apt-repository ppa:eiffelstudio-team/ppa
sudo apt-get update
sudo apt-get install eiffelstudio apache2 libgtk2.0-dev libxtst-dev
sudo ln -s /etc/apache2/mods-available/cgi.load /etc/apache2/mods-enabled/cgi.load
sudo ln -s /etc/apache2/mods-available/rewrite.load /etc/apache2/mods-enabled/rewrite.load
sudo chgrp -R www-data /usr/lib/cgi-bin/
sudo chmod -R g+w /usr/lib/cgi-bin/
sudo chgrp -R www-data /var/www/
sudo chmod -R g+w /var/www/
sudo usermod -G www-data dose
su -l dose
mkdir ~/dose2014

pushd /home/dose/dose2014
svn=https://dose2014.googlecode.com/svn/tags/group5-prototype
svn export $svn/backend backend --username dsteblyuk@gmail.com
svn export $svn/deploy deploy --username dsteblyuk@gmail.com
# install db
mkdir /var/www/db
cp backend/db/test.db /var/www/db/
popd
exit # exit user dose to default user
# Security? I don't know what it is.
sudo chmod 777 -R /var/www/db/ # without it, writes to DB throws Exceptions
sudo cp /home/dose/dose2014/deploy/apache-mgmt.conf /etc/apache2/conf-available/
sudo ln -s /etc/apache2/conf-available/apache-mgmt.conf /etc/apache2/conf-enabled/apache-mgmt.conf

# FRONTEND
sudo apt-get install npm subversion git
sudo ln -s /usr/bin/nodejs /usr/bin/node # fix ubuntu npm installation bug

# MAIL
sudo apt-get install mailutils
cp ~/dose2014/deploy/mail/send.py ~/dose2014/