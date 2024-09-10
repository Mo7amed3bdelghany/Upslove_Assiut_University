v=[0,1]
for i in range(50): v.append(v[i]+v[i+1])
print(*v[:int(input())])