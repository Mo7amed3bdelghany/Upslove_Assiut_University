s=input()
op=s.find('+')
if op!=-1:
    print(int(s[:op])+int(s[op+1:]))
else:
    op=s.find('-')
    if(op!=-1):
        print(int(s[:op])-int(s[op+1:]))
    else:
        op=s.find('*')
        if op!=-1:
            print(int(s[:op])*int(s[op+1:]))
        else:
            op=s.find('/')
            print(int(s[:op])//int(s[op+1:]))