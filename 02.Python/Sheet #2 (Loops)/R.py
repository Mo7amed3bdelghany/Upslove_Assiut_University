while 1:
    n,m=sorted(map(int,input().split()))
    if n<=0:break
    print(*range(n,m+1),f'sum ={((n+m)*((m-n)+1))//2}')