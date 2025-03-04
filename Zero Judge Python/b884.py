n=int(input())
for i in range(n):
    a,b = map(int,input().split())
    r = (a+b)**0.5
    yee = 100-r*r
    if(0<yee and yee<=30):
        print("sad!")
    elif(30<yee and yee<=60):
        print("hmm~~")
    elif(60<yee and yee<100):
        print("Happyyummy")
    else:
        print("evil!!")