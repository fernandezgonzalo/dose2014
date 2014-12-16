#!/bin/bash
ip=54.187.136.201
if [[ $1 == "-f" ]]; then
  ssh dose@$ip /bin/bash < dev-frontend-deploy.sh
elif [[ $1 == "-b" ]]; then
  ssh dose@$ip /bin/bash < dev-backend-deploy.sh
else 
  cat dev-backend-deploy.sh dev-frontend-deploy.sh >> both-deploy.sh
  ssh dose@$ip /bin/bash < both-deploy.sh
  rm both-deploy.sh
fi