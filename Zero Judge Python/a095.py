try:
    while(True):
        criminal,red = map(int,input().split())

        if(criminal>red):
            print(red+1)
        else:
            print(red)
except EOFError:
    pass