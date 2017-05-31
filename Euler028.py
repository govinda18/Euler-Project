t=int(input())
for i in range(t):
    n=int(input())
    n=(n-1)//2
    #a(n) = 1 + 10*n^2 + [(16n^3 + 26n)/3]
    print((1+10*(n**2)+((16*(n**3)+26*n)//3))%1000000007)