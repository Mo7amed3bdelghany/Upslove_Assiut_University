n=input().split()
a=int(n[0])
b=int(n[2])
op=n[1]
res=n[4]
ans = a + b
if op=='-': ans = a - b
elif op=='*': ans = a * b
if int(res)==int(ans): print("Yes")
else :print(int(ans))