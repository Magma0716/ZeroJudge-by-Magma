number = "0"+"5882352941176470"*10625

n=int(input())
for i in range(n):
    position = int(input())
    sum=0
    for j in range(0,position):
        sum+=int(number[j])
    print(number[position-1],sum)