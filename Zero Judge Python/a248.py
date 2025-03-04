from decimal import Decimal, getcontext
try:
    while(True):
        a,b,n = map(int,input().split())
        getcontext().prec = n+10
        ans = f"{Decimal(a)/Decimal(b):.{n+10}f}"
        print(ans[:-10])
        
except EOFError:
    pass