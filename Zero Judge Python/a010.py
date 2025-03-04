dict={}
n = int(input())

i = 2
while(n!=1):
    if(n%i==0):
        n/=i
        if(i in dict):
            dict[i] += 1
        else:
            dict[i] = 1
    else:
        i+=1

arr=[]
for k,v in dict.items():
    if(v==1):
        arr.append(f"{k}")
    else:
        arr.append(f"{k}^{v}")
        
print(" * ".join(arr))