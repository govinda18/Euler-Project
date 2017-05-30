def ans(n):
    s=0
    n=str(n)
    for i in n:
        s+=int(i)
    return s

t=int(input())
for i in range(t):
    n=int(input())
    print ans(2**n)