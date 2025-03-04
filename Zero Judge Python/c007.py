try:
    count=0
    while(True):
        arr = input()
        ans=""
        for i in arr:
            if(i=="\"" and count%2==0):
                ans+="``"
                count+=1
            elif(i=="\"" and count%2==1):
                ans+="''"
                count+=1
            else:
                ans+=i    
        print(ans)
except EOFError:
    pass