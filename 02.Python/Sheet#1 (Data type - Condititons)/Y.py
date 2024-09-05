a,b,c,d=map(int,input().split())
res=(a*b*c*d)%100
if res<10:
    print(f"0{res}")
else:
    print(res) 