s=list(input())

n=int(input())
for i in range(n):
    
    choice=int(input())
    if(choice==0):
        for j in range(len(s)//2):
            s[2*j],s[2*j+1]=s[2*j+1],s[2*j]
    elif(choice==1):
        for j in range(len(s)//2):
            if(ord(s[2*j])>ord(s[2*j+1])):
                s[2*j],s[2*j+1]=s[2*j+1],s[2*j]
    elif(choice==2):
        Len = len(s)
        left=s.copy()[0:Len//2]
        right=s.copy()[Len//2:Len]
        s=[]
        for j in range(Len//2):
            s.append(left[j])
            s.append(right[j])
print("".join(s))