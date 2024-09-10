n=int(input())
v=*map(int,input().split()),
odd=0; pos=0; neg=0
for i in v:
    odd+=i&1
    pos+=i>0
    neg+=i<0
print(f"Even: {n-odd}\nOdd: {odd}\nPositive: {pos}\nNegative: {neg}")
