n,m=map(int,input().split());mx=0
for i in range(1,max(n,m)+1):
    if n%i==0 and m%i==0: mx=max(mx,i)
print(mx)