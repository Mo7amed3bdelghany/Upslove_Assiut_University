a,b,c=map(int,input().split())
if((a*b)%c): print("double")
else: print(["int","long long"][(a*b)/c>2147483647])
