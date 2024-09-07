for _ in [0]*int(input()):
    n,m = map(int,input().split())
    print(((m+n)*(abs(m-n)+1))//2)