n=int(input())
s=0
for i in range(n):
    x=int(input())
    s+=x
s=str(s)
for i in range(10):
    print(s[i],end='')