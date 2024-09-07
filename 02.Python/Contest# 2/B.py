n=int(input())
v=[]
for i in range(n):
    v.append(['*']*n)
    v[i][i]='\\'
    v[i][n-i-1]='/'
v[n//2][n//2]='X'
for i in range(n):
    print("".join(v[i]))