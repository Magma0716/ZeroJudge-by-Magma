import math
a,b,c = map(int,input().split())

judge = b*b-4*a*c

if(judge>0):
    Positive = int((-b+math.sqrt(b*b-4*a*c))//(2*a))
    Nagetive = int((-b-math.sqrt(b*b-4*a*c))//(2*a))
    print(f"Two different roots x1={Positive} , x2={Nagetive}")
elif(judge<0):
    print("No real root")
else:
    Positive = int((-b+math.sqrt(b*b-4*a*c))//(2*a))
    Nagetive = int((-b-math.sqrt(b*b-4*a*c))//(2*a))
    print(f"Two same roots x={Positive}")