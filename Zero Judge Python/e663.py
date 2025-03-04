weight = list(map(int,input().split()))

weight.sort()

all = 0
for i in weight:
    all += i
        
#all students weights
all //= 4

c = all - weight[0] - weight[9]
e = weight[8] - c 
d = weight[9] - e
a = weight[1] - c 
b = weight[0] - a
        
ans = [a,b,c,d,e]
ans.sort()

for i in ans:
    print(i,end=" ")
print('\n',end="")