for _ in[0] * int(input()):
    n, m = sorted(map(int, input().split()))
    print(sum(range(n+1+n%2,m,2)))
