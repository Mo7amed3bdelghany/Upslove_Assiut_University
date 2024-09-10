def is_prime(n: int) -> bool:
    i=2
    while i*i<=n:
        if n%i==0: return False
        i+=1
    return n>1

for i in range(2,int(input())+1):
    if is_prime(i):
        print(i,end=' ')