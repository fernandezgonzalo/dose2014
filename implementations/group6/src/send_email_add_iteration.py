import email
import smtplib
import sys

#receives the user email to which send the email
if len(sys.argv) >= 4:
    print 'Argument List:', str(sys.argv)
    user_email = sys.argv[1]
    project_name = sys.argv[2]
    iteration_name = sys.argv[3]

msg = email.message_from_string('Dear user,\n\nA new iteration "%s" was added to the project "%s" which you own.\n\nKind Regards\n\nDOSE Service Assistances \n\nThis is an automatically generated email, please do not reply to it. ' %(iteration_name, project_name))
msg['From'] = "dose2014system@hotmail.com"
msg['To'] = user_email
msg['Subject'] = "[No reply] - Added new iteration"

s = smtplib.SMTP("smtp.live.com",587)
s.ehlo()
s.starttls()
s.ehlo()
s.login('dose2014system@hotmail.com', 'groupMilan2')

s.sendmail("dose2014system@hotmail.com", user_email, msg.as_string())

s.quit()

