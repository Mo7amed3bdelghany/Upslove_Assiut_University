x,y,z=map(int,input().split())
a,b,c=x,y,z
if a>b:
    a,b=b,a
if a>c:
    a,c=c,a
if b>c:
    b,c=c,b
print(f"{a}\n{b}\n{c}\n")
print(f"{x}\n{y}\n{z}")