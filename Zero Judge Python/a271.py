n = int(input())

for _ in range(n):
    r,w,y,fa,p,weight = map(int,input().split())
    arr = list(map(int,input().split()))
    
    posion=False
    count=0
    if(arr==[]):
        print(f"{weight}g")
        continue
    else:
        for i in range(len(arr)):
            if(posion):
                weight -= p*count
            if(weight<=0):
                print("bye~Rabbit")
                break
            if(arr[i]==0):
                pass
            elif(arr[i]==1):
                weight += r
            elif(arr[i]==2):
                weight += w
            elif(arr[i]==3):
                weight -= y
            elif(arr[i]==4):
                weight -= fa
                posion = True
                count+=1
            if(weight<=0):
                print("bye~Rabbit")
                break   
    if(weight>0):
        print(f"{weight}g")