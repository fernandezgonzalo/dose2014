#!/bin/bash
if [[ $1 == "-f" ]]; then
  ssh dose@128.199.58.166 /bin/bash < frontend-deploy.sh
elif [[ $1 == "-b" ]]; then
  ssh dose@128.199.58.166 /bin/bash < backend-deploy.sh
else 
  cat backend-deploy.sh frontend-deploy.sh >> both-deploy.sh
  ssh dose@128.199.58.166 /bin/bash < both-deploy.sh
  rm both-deploy.sh
fi