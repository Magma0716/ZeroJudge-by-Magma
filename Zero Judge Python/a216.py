try:
    def f(n):
        return n*(n+1)/2
    
    def g(n):
        return n*(n+1)*(2*n+4)/12
    
    while(True):
            n = int(input())
            print(f"{int(f(n))} {int(g(n))}",end=" ")
            print('\n',end="")
except EOFError:
    pass