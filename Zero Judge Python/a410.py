a,b,c,d,e,f = map(int,input().split())

delta = a*e - b*d
delX = c*e - b*f
delY = a*f - c*d 

if(delta!=0):
    x = float(delX/delta)
    y = float(delY/delta)
    print(f"x={x:.2f}")
    print(f"y={y:.2f}")
elif((delta==delX) and (delX==delY) and (delY==0)):
    print("Too many")
else:
    print("No answer")