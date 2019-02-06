import os
# ap=input("input path")
ap=r'/home/jianjian/code/Nice_Blog-master/_sass'
a=os.listdir(ap)
def f(p):
    if os.path.isdir(p):
        for i in os.listdir(p):
            f(p+'/'+i)
    else:
        try:
            with open(p,'r')as file:
                if '18' in file.read():
                    print(p)
        except Exception as e:
            print(p,e)
f(ap)