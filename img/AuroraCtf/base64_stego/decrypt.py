
import base64
bs=''
def de(s):
    global bs
    table="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
    s=s[len(s)-4:]
    os=base64.b64encode(base64.b64decode(s)).decode()
    if s.count('=')==1:
        bs+=bin(table.index(s[-2])-table.index(os[-2]))[2:].zfill(2)
        print(bin(table.index(s[-2])-table.index(os[-2])))
    elif s.count('=')==2:
        print(bin(table.index(s[-3])-table.index(os[-3])))
        bs+=bin(table.index(s[-3])-table.index(os[-3]))[2:].zfill(4)

with open(r'C:\Users\sofiesJian\Desktop\base64.txt','r')as f:
    for i in f.readlines():
        de(i[:len(i)-1])
print(int(bs,2).to_bytes(50,'big')) 