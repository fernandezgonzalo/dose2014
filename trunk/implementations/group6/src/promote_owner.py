import email
import smtplib
import sys

#receives the user email to which send the email
if len(sys.argv) >= 2:
    print 'Argument List:', str(sys.argv)
    user_email = sys.argv[1]
    #   print sys.argv[2]
    #generated_password = sys.argv[2]
    #print generated_password

msg = email.message_from_string('Dear owner,\n\nOne owner has promoted a new owner for the project.\n\nKind Regards\n\nDOSE Service Assistances \n\nThis is an automatically generated email, please do not reply to it. ')
msg['From'] = "dose2014system@hotmail.com"
msg['To'] = user_email
msg['Subject'] = "[No reply] - New owner added"

s = smtplib.SMTP("smtp.live.com",587)
s.ehlo()
s.starttls()
s.ehlo()
s.login('dose2014system@hotmail.com', 'groupMilan2')

s.sendmail("dose2014system@hotmail.com",user_email, msg.as_string())

s.quit()
