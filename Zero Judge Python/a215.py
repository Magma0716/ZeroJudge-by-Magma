try:
    while(True):
        a,b = map(int,input().split())
        ans = 0
        count = 0
        i = a
        while(True):
            ans += i
            count += 1
            i += 1
            if(ans>b):
                print(count)
                break;
except EOFError:
    pass