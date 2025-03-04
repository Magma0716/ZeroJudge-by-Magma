for i in range(int(input())):
    n=input()
    s=list(input().split(n))
    
    if(n=="+"):
        print(int(s[0])+int(s[1]))
    else:
        print(int(s[0])-int(s[1]))