a,b,c,d=map(int,input().split())
if a>c:
    # swap
    a,c=c,a
    b,d=d,b
if c>b:
    print(-1)
else:
    print(c, min(b,d))