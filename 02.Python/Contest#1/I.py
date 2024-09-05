n=input()
if n[1]=='0': print("YES")
else:print(["NO","YES"][(int(n[0])%int(n[1]))==0 or (int(n[1])%int(n[0]))==0])