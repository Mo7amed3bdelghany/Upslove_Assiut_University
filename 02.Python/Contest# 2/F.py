input()
v=*map(int,input().split()),
mx=0
for i in v:
    x=i;cnt=0
    while x%2==0: x//=2;cnt+=1
    mx=max(mx,cnt)
print(mx)