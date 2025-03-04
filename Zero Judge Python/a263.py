import datetime

try:
    while True:
        a,b,c = input().split()
        d,e,f = input().split()
        d1 = datetime.datetime(int(a),int(b),int(c))
        d2 = datetime.datetime(int(d),int(e),int(f))
        difference = str(d1-d2).split()
        print(abs(int(difference[0])))
except EOFError:
    pass