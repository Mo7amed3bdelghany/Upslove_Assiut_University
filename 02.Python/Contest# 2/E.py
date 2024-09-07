n=int(input())
print(n//4, [n%4,abs((n%4)-3)][(n//4)&1])