times = int(input())
n = [int(input()) for x in range(times)]
for i in range(times):
    if n[i] > 0:
        m = 1
    else:
        m = 0
    while n[i] > 0:
        d = n[i] % 10
        m = d*m
        n[i] = n[i] // 10
    print(m)