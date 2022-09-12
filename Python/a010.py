from re import I


n = int(input())
i = 2
First = True
while n > 1:
    if n % i != 0:
        i += 1 ; continue
    times = 0
    while n % i == 0:
        times += 1
        n = n // i
    if not First: print(' * ',end='')
    First = False
    print(i,end='')
    if times>1: print('^',times,sep='' , end='')
    