import email
import smtplib
import sys

#receives the user email to which send the email
if len(sys.argv) >= 3:
    print 'Argument List:', str(sys.argv)
    user_email = sys.argv[1]
    #   print sys.argv[2]
    generated_password = sys.argv[2]

msg = email.message_from_string('Dear user,\n\nWe have received your forgotten password request.\n\nPlease, use the temporary password below for log in in your account and you must change it at your first access from your profile area.\n\nTEMPORARY PASSWORD: %s \n\nKind Regards\n\nDOSE Service Assistances \n\nThis is an automatically generated email, please do not reply to it. ' %generated_password)
msg['From'] = "dose2014system@hotmail.com"
msg['To'] = user_email
msg['Subject'] = "[No reply] - Account password reset"

s = smtplib.SMTP("smtp.live.com",587)
s.ehlo()
s.starttls()
s.ehlo()
s.login('dose2014system@hotmail.com', 'groupmilan2')

s.sendmail("dose2014system@hotmail.com",user_email, msg.as_string())

s.quit()
