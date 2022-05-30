n = [int(x) for x in input().split()]
A = max(n)
B = min(n)


while B > 0:
    R = A % B 
    A , B = B , R
    
print(A)