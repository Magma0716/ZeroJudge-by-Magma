from math import gcd
try:
    while(True):
        a,b=map(int,input().split())
        print(gcd(a,b))
except (EOFError,ValueError):
    pass