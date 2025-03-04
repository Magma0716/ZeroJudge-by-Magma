for i in range(int(input())):
    s=list(input().split("+"))
    n=int(input())
    if(int(s[0])+int(s[1])==n):
        print("yes")
    else:
        print("no")
    