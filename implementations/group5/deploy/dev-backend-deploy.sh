#!/bin/bash
pushd /home/dose/dose2014
pushd backend
svn update
ec -config mgmt.ecf -target mgmt_cgi -finalize -c_compile -project_path .
cp EIFGENs/mgmt_cgi/F_code/mgmt .
mv mgmt mgmt.cgi
cp mgmt.cgi /usr/lib/cgi-bin/
popd
popd
