#!/bin/bash
svn=https://dose2014.googlecode.com/svn/tags/group5-prototype
# install all
# sudo add-apt-repository ppa:eiffelstudio-team/ppa
# sudo apt-get update
# sudo apt-get install eiffelstudio apache2 libgtk2.0-dev libxtst-dev
# sudo ln -s /etc/apache2/mods-available/cgi.load /etc/apache2/mods-enabled/cgi.load
# sudo ln -s /etc/apache2/mods-available/rewrite.load /etc/apache2/mods-enabled/rewrite.load
# sudo chgrp -R www-data /usr/lib/cgi-bin/
# sudo chmod -R g+w /usr/lib/cgi-bin/
# sudo chgrp -R www-data /var/www/
# sudo chmod -R g+w /var/www/
# sudo usermod -G www-data dose

pushd /home/dose/dose2014
rm -rf deploy
svn export $svn/deploy deploy --username dsteblyuk@gmail.com
rm -rf .backend_bak
mv backend .backend_bak
svn export $svn/backend backend --username dsteblyuk@gmail.com

# install db
# mkdir /var/www/db
# cp backend/db/test.db /var/www/db/
# Security? I don't know what it is.
# sudo chmod 777 -R /var/www/db/ # without it, writes to DB throws Exceptions

pushd backend
sed -i '/-- sed replace db/{N; s/Result.*/Result := "\/var\/www\/db\/test.db"/}' application.e
sed -i '/-- sed replace www/{N; s/Result.*/Result := "\/var\/www\/html"/}' application.e
# sudo cp ../deploy/apache-mgmt.conf /etc/apache2/conf-available/
# sudo ln -s /etc/apache2/conf-available/apache-mgmt.conf /etc/apache2/conf-enabled/apache-mgmt.conf
ec -config mgmt.ecf -target mgmt_cgi -finalize -c_compile -project_path .
cp EIFGENs/mgmt_cgi/F_code/mgmt .
mv mgmt mgmt.cgi
cp mgmt.cgi /usr/lib/cgi-bin/
popd
popd
