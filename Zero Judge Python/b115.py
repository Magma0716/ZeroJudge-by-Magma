try:
    while(True):
        a=int(input())
        s=input()
        b=int(input())
        
        if(s=="+"):
            print(a+b)
        elif(s=="-"):
            print(a-b)
        elif(s=="*"):
            print(a*b)
        elif(s=="/"):
            print(a//b)
except EOFError:
    pass