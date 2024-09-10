n,m=map(int,input().split())
l=[0,1,2,3,5,6,8,9];ch=1
for i in range(n,m+1):
    ok=1
    for _ in l:
        if str(_) in str(i):ok=0;break
    if(ok): print(i,end=' ');ch=0
if(ch):print(-1)