import email
import smtplib
import sys

#receives the user email to which send the email
if len(sys.argv) >= 4:
    #print 'Argument List:', str(sys.argv)
    user_logged = sys.argv[1]
    user_deleted = sys.argv[2]
    project_name= sys.argv[3]

msg = email.message_from_string('Dear user,\n\n You was removed from the project "%s" from "%s".\n\nNow you have not access to it.\n\nThis is an automatically generated email, please do not reply to it. ' %(project_name,user_logged))
msg['From'] = "dose2014system@hotmail.com"
msg['To'] = user_deleted
msg['Subject'] = "[No reply] - Deleted from project"

s = smtplib.SMTP("smtp.live.com",587)
s.ehlo()
s.starttls()
s.ehlo()
s.login('dose2014system@hotmail.com', 'groupMilan2')

s.sendmail("dose2014system@hotmail.com", user_deleted, msg.as_string())

s.quit()

