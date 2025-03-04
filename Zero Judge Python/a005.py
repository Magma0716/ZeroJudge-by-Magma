n = int(input())
for _ in range(n):
    a,b,c,d = map(int,input().split())
    if(b-a == c-b):
        Difference = b - a
        e = int(d+Difference)
        print(f"{a} {b} {c} {d} {e}")
    else:
        Ratio = b/a
        e = int(d*Ratio)
        print(f"{a} {b} {c} {d} {e}")