n=float(input())
if n>=0 and n<=25:
    print("Interval [0,25]")
elif n>25 and n<=50:
    print("Interval (25,50]")
elif n>50 and n<=75:
    print("Interval (50,75]")
elif n>75 and n<=100:
    print("Interval (75,100]")
else:
    print("Out of Intervals")