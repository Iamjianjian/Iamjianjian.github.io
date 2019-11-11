en=r'QXVyb3Jhe3IzcGw0YzNtM250X3Q0YmwzNV80cjNfNTBtM3QxbTM1XzRfazN5X2JyMzRrdGhyMHVnaH0='
abc=r'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/'
v5=0
result=[0]*60
for i in range(20):
    i=i*4
    t=i
    index=abc.index(en[t])
    a1v5h6=index*4

    t=i+1
    index=abc.index(en[t])
    a1v5l2=(index&0x30)//16
    a1v51h4=index&15

    t=i+2
    index=abc.index(en[t])
    a1v51l4=(index//4)&15
    a1v52h2=(index&0x3)*(2**6)
    # print(a1v52h2)

    a1v5=a1v5h6+a1v5l2                  #v5
    a1v51=a1v51h4*16+a1v51l4
    result[v5]=a1v5                      #v5
    result[v5+1]=a1v51                   #v5+1

    if i==19*4:
        break
    t=i+3
    index=abc.index(en[t])
    a1v52l6=index

    a1v52=a1v52l6+a1v52h2
    result[v5+2]=a1v52                   #v5+2

    v5+=3
print(result)
for i in range(59):
    print(chr(result[i]),end='')