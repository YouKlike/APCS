n,d = map(int , input().split())
a = [int(x) for x in input().split()]

M = True
buy = a[0]
sell = 0
profit = 0

for i in range(1,n):
    if M:
        if a[i] >= buy + d:
            sell = a[i]
            profit += a[i] - buy
            M = False
    else:
        if a[i] <= sell - d:
            buy = a[i]
            M = True

print(profit)