n=int(input())
arr=list(map(int,input().split()))

sum=0

for i in range(n):
    sum+=arr[i]
    print(sum,end=" ")
