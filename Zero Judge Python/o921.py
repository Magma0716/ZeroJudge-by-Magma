from datetime import datetime as dt

m1,d1 = map(int,input().split())
m2,d2 = map(int,input().split())

now = f"2022-{m1}-{d1}"
birth = f"2022-{m2}-{d2}"

D1 = dt.strptime(now,"%Y-%m-%d")
D2 = dt.strptime(birth,"%Y-%m-%d")
if(D1<D2):
    print((D2-D1).days)
elif(D1>D2):
    newBirth = f"2023-{m2}-{d2}"
    D2 = dt.strptime(newBirth,"%Y-%m-%d")
    print((D2-D1).days)
else:
    print(0)