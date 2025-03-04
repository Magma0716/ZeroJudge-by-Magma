a,b=map(int,input().split())
if(a%2==1 and b%2==1):
    print((b-a)//2)
elif(a%2==0 and b%2==0):
    print((b-a)//2+1)
else:
    print((b-a+1)//2)