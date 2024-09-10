k,s=map(int,input().split());count=0
for i in range(k+1):
    for j in range(k+1):
        if 0<=s-(i+j)<=k: count+=1
print(count)