s=input()
ch=s.find('>')
if(ch!=-1):
    if int(s[:ch-1])>int(s[ch+1:]):
        print("Right")
    else:
        print("Wrong")
else:
    ch=s.find('<')
    if(ch!=-1):
        if int(s[:ch-1])<int(s[ch+1:]):
            print("Right")
        else:
            print("Wrong")
    else:
        ch=s.find('=')
        if int(s[:ch-1])==int(s[ch+1:]):
            print("Right")
        else:
            print("Wrong")