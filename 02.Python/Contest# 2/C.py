n,k=map(int,input().split())
v=*map(int,input().split()),
for i in range(0,n,k): print(min(v[i:i+k]),end=' ')