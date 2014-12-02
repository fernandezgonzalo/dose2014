#!/bin/bash
dest=~/dose2014/backups
db=/var/www/db
keep=30 # keep backup for 30 days

# mkdir $dest
pushd $db
now=$(date +'%d.%m.%Y')
echo $now
sqlite3 test.db '.dump' > $dest/backup-$now.sql

# clear old backups (older than 30 days)
  pushd $dest
    find . -maxdepth 1 -mtime +$keep -exec rm -rv {} \;
  popd
popd