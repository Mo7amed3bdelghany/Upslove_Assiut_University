from math import ceil
x,y=map(int,input().split())
res=float(x/y)
print(f"floor {x} / {y} = {int(res)}")
print(f"ceil {x} / {y} = {ceil(res)}")
if res-int(res) ==0.5:
    res = int(res+1)
print(f"round {x} / {y} = {round(res)}")
