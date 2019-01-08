import os
import sys
p=sys.argv[1]
a=os.listdir(p)
for i in a:
    if i.endswith('.PNG'):
        os.rename(p+i,p+i[:len(i)-4]+'.png')