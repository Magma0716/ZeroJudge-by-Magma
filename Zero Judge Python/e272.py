from math import gcd

f = [1,1] 
for i in range(0,9999):
    f.append(f[i] + f[i+1])
 
try:   
    while(True):
        a,b = map(int,input().split())
        print(f[gcd(b,a)-1])
except EOFError:
    pass