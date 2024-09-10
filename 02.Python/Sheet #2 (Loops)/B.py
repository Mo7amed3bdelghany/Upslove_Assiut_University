n=int(input())
print(*[[-1],range(2,n+1,2)][n>1],sep='\n')