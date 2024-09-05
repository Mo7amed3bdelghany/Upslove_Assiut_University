from math import log
a,b,c,d=map(int,input().split())
if b*log(a) > d*log(c):
    print("YES\n")
else:
    print("NO\n")
