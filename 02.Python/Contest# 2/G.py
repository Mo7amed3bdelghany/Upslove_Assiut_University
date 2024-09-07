for _ in[0]*int(input()):
    n,s=map(int,input().split())
    if (n*(n+1)//2) <s: print(-1)
    else:
        if n>=s: print(s)
        else:
            sum=0; i=n
            while i: 
                if sum + i <= s: sum+=i; print(i,end=' ')
                i-=1
            print()