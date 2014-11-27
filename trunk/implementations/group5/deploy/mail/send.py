#!/usr/bin/python
import urllib2
import json
import sys
import smtplib
from email.mime.text import MIMEText


user_id = 1
if len(sys.argv) >= 2:
  user_id = int(sys.argv[1])

# url = 'http://localhost:9100/api/users'
url = 'http://localhost/api/users'
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
  Can you please contact and help her/him through this her/his email: "{2}"!

Best wishes, 
  Automatic DOSE mail script.
""".format(user['name'], user['username'], user['email'])

me = 'admin@dose.net'
you = 'dsteblyuk@gmail.com'
msg = MIMEText(body)
msg['Subject'] = 'Password recovery request'
msg['From'] = me
msg['To'] = you

# Send the message via our own SMTP server, but don't include the
# envelope header.
s = smtplib.SMTP('localhost')
s.sendmail(me, [you], msg.as_string())
s.quit()
