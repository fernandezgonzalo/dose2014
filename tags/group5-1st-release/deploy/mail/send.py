#!/usr/bin/python
import urllib2
import json
import sys
import smtplib
from email.mime.text import MIMEText


user_id = 1
if len(sys.argv) >= 2:
  user_id = int(sys.argv[1])

url = 'http://localhost/api/users'
# url = 'http://localhost:9100/api/users'
users = json.loads(urllib2.urlopen(url).read())

user = None
admins = []

for each_user in users:
  id = int(each_user['id'])
  is_admin = int(each_user['is_admin'])
  if id == user_id:
    user = each_user
  if is_admin == 1:
    admins.append(each_user['email'])

body = """
Dear administrators,
  
  Our cordial user "{0}" ("{1}") needs help.
  It seems (s)he forgot the password.
  Can you please contact and help her or him through this email: "{2}"!

Best wishes, 
  Automatic DOSE mail script.
""".format(user['name'], user['username'], user['email'])

if len(admins) <= 0:
  admins.append('dsteblyuk@gmail.com')

me = 'admin@dose.net'
msg = MIMEText(body)
msg['Subject'] = 'Password recovery request'
msg['From'] = me
msg['To'] = admins[0]

# Send the message via our own SMTP server, but don't include the
# envelope header.
s = smtplib.SMTP('localhost')
s.sendmail(me, admins, msg.as_string())
s.quit()