n = int(input())
count = 0

for i in range(0,n,1):
    a = int(input())
    b = int(input())
    ans = 0
    for j in range(1,32,1):
        if(j*j<a):
            continue
        if(j*j>b):
            break
        ans += j*j
    count += 1    
    print(f"Case {count}: {ans}")