#!/bin/bash
# sudo add-apt-repository ppa:eiffelstudio-team/ppa
# sudo apt-get update
# sudo apt-get install eiffelstudio apache2 libgtk2.0-dev libxtst-dev
# sudo cp /etc/apache2/mods-available/cgi.load /etc/apache2/mods-enabled/
# sudo cp /etc/apache2/mods-available/rewrite.load /etc/apache2/mods-enabled/
# sudo chgrp -R www-data /usr/lib/cgi-bin/
# sudo chmod -R g+w /usr/lib/cgi-bin/
# sudo chgrp -R www-data /var/www/html/
# sudo chmod -R g+w /var/www/html/
# sudo usermod -G www-data dose
pushd /home/dose/dose2014
rm -rf .backend_bak
mv backend .backend_bak
svn export https://dose2014.googlecode.com/svn/trunk/implementations/group5/backend backend --username dsteblyuk@gmail.com
svn export https://dose2014.googlecode.com/svn/trunk/implementations/group5/deploy deploy --username dsteblyuk@gmail.com
# mkdir db
# cp backend/db/test.db db/
pushd backend
sed -i '/-- sed replace db/{N; s/Result.*/Result := "\/home\/dose\/dose2014\/db\/test.db"/}' application.e
sed -i '/-- sed replace www/{N; s/Result.*/Result := "\/var\/www\/html"/}' application.e
# sudo cp ../deploy/apache-mgmt.conf /etc/apache2/conf-available/
# sudo ln -s /etc/apache2/conf-available/apache-mgmt.conf /etc/apache2/conf-enabled/apache-mgmt.conf
ec -config mgmt.ecf -target mgmt_cgi -finalize -c_compile -project_path .
cp EIFGENs/mgmt_cgi/F_code/mgmt .
mv mgmt mgmt.cgi
cp mgmt.cgi /usr/lib/cgi-bin/
popd
popd
