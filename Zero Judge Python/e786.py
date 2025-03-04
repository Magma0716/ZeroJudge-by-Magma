arr = input()
arr2 = arr[::-1] 

if((arr==arr2) & (len(arr)%2==0)):
    print("YES")
    print(f"{arr[0:len(arr2)//2:]}")
else:
    print("NO")