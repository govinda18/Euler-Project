import math
def cal(n):
    n=math.factorial(n)
    n=str(n)
    s=0
    for i in n:
        s+=int(i)
    return s

t=int(input())
for i in range(t):
    n=int(input())
    print(cal(n))