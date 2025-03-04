n = int(input())

time = []
score = []
error = 0
max = -2
index = 0 
for i in range(n):
    t,s = map(int,input().split())
    time.append(t)
    score.append(s)

    if(s==-1):
        error+=1
    if(max<score[i]):
        max = score[i]
        index = i

ans = score[index] - len(time) - error*2
if(ans<0):
    ans = 0

print(f"{ans} {time[index]}")