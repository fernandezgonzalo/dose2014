import random
import os
import sys

alphabet = "abcdefghijklmnopqrstuvwxyz"
pw_length = 8
mypw = ""

for i in range(pw_length):
    next_index = random.randrange(len(alphabet))
    mypw = mypw + alphabet[next_index]

# replace 1 or 2 characters with a number
for i in range(random.randrange(1,3)):
    replace_index = random.randrange(len(mypw)//2)
    mypw = mypw[0:replace_index] + str(random.randrange(10)) + mypw[replace_index+1:]

# replace 1 or 2 letters with an uppercase letter
for i in range(random.randrange(1,3)):
    replace_index = random.randrange(len(mypw)//2,len(mypw))
    mypw = mypw[0:replace_index] + mypw[replace_index].upper() + mypw[replace_index+1:]

#Write the generated password into file generation_pass.txt
out_file = open("generation_pass.txt","w")
out_file.write(mypw)
out_file.close()




