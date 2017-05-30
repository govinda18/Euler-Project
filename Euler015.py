import math
f=math.factorial
t=int(input())
for i in range(t):
    m,n=raw_input().split()
    m=int(m)
    n=int(n)
    ans=int(f(n+m)/(f(n)*f(m)))
    print(ans%1000000007)