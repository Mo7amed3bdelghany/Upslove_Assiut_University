l,r=map(int,input().split())
print(["YES","NO"][l==r==0 or abs(l-r)>1])
