n=float(input())
x=int(n)
if x//n == 1:
    print("int",x)
else:
    n=str(n)
    print(f"float {x} 0{n[n.find('.'):]}")