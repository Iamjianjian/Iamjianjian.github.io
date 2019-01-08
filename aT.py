import time
import re
import os
import sys
# print(time.strftime('%Y-%m-%d',time.localtime(time.time())))
posts=os.listdir('./_posts')
for i in posts:
    if not re.match(r'\d\d\d\d-\d\d-\d\d-.+',i):
        os.rename('./_posts/'+i,'./_posts/'+time.strftime('%Y-%m-%d',time.localtime(time.time()))+'-'+i)
        print('add ',i)