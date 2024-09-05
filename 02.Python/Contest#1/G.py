eye,mouth, body=map(int,input().split())
mn =min(eye,mouth,body)
print([int(mn),int(mn+min((body-mn),((eye-mn)//2)))][mn==mouth])