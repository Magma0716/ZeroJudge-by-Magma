n = int(input())

List = list(map(int,input().split()))

set = list(set(List))
set.sort()

print(len(set))
for i in set:
    print(i,end=" ")