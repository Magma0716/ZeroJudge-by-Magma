n = 1
while(n!=0):
    n = int(input())
    
    for i in range(0,n,1):
        if(i%7==0):
            continue
        print(i,end=" ")
    print('\n',end="")