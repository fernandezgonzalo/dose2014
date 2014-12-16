import email
import smtplib
import sys

#receives the user email to which send the email
if len(sys.argv) >= 2:
    #print 'Argument List:', str(sys.argv)
    user = sys.argv[1]

msg = email.message_from_string('Dear user,\n\nWelcome to our DOSE2014 Web Application. \n\nNow you can access to your personal Dashboar.\n\nThis is an automatically generated email, please do not reply to it. ')
msg['From'] = "dose2014system@hotmail.com"
msg['To'] = user
msg['Subject'] = "[No reply] - Welcome DOSE2014"

s = smtplib.SMTP("smtp.live.com",587)
s.ehlo()
s.starttls()
s.ehlo()
s.login('dose2014system@hotmail.com', 'groupMilan2')

s.sendmail("dose2014system@hotmail.com", user, msg.as_string())

s.quit()


