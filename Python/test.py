from pwn import *
r = remote('120.114.62.214',2403)
r.recvline(3)
for i in range(100):
    r.recvline(2)
    r.sendline(str(i+1).encode())
    
print(r.recvline().decode())
