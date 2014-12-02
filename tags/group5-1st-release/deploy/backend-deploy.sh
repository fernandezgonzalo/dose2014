#!/bin/bash
svn=https://dose2014.googlecode.com/svn/tags/group5-prototype
pushd /home/dose/dose2014
rm -rf .backend_bak
mv backend .backend_bak
svn export $svn/backend backend --username dsteblyuk@gmail.com
pushd backend
sed -i '/-- sed replace db/{N; s/Result.*/Result := "\/var\/www\/db\/test.db"/}' application.e
sed -i '/-- sed replace www/{N; s/Result.*/Result := "\/var\/www\/html"/}' application.e
ec -config mgmt.ecf -target mgmt_cgi
pushd EIFGENs/mgmt_cgi/W_code
finish_freezing
mv ./mgmt /usr/lib/cgi-bin/mgmt.cgi
popd
popd
popd
