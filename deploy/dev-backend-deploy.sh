#!/bin/bash
pushd /home/dose/dose2014
pushd backend
svn update
sed -i '/-- sed replace db/{N; s/Result.*/Result := "\/var\/www\/db\/test.db"/}' application.e
sed -i '/-- sed replace www/{N; s/Result.*/Result := "\/var\/www\/html"/}' application.e
ec -config mgmt.ecf -target mgmt_cgi
pushd EIFGENs/mgmt_cgi/W_code
finish_freezing
mv ./mgmt /usr/lib/cgi-bin/mgmt.cgi
popd
popd
popd
