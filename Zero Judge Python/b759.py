from collections import deque

arr = deque(list(input()))

for i in range(0,len(arr),1):
    ans = "".join(arr)
    print(ans)
    arr.rotate(-1)