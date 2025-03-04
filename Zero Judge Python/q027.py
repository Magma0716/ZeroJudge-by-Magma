s=input()

sum=0
k=30

for i in range(0,len(s),k):
    sum = (sum * (10**min(k,len(s)-i)) + int(s[i:i+k])) % 17

if(sum==0):
    print("Yes")
else:
    if(sum>=9):
        print(17-sum)
    else:
        print(sum)