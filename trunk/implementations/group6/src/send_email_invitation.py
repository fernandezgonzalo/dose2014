import email
import smtplib
import sys

#receives the user email to which send the email
if len(sys.argv) >= 3:
    print 'Argument List:', str(sys.argv)
    user_logged = sys.argv[1]
    user_toinvite = sys.argv[2]

msg = email.message_from_string('Dear user,\n\n "%s" invited you to join him at DOSE2014. \n\nTo do that, please click on the following link:\n\n www.test_link.it\n\nThis is an automatically generated email, please do not reply to it. ' %user_logged)
msg['From'] = "dose2014system@hotmail.com"
msg['To'] = user_toinvite
msg['Subject'] = "[No reply] - Invitation to DOSE2014"

s = smtplib.SMTP("smtp.live.com",587)
s.ehlo()
s.starttls()
s.ehlo()
s.login('dose2014system@hotmail.com', 'groupMilan2')

s.sendmail("dose2014system@hotmail.com", user_toinvite, msg.as_string())

s.quit()
