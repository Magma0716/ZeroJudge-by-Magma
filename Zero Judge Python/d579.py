import math
try:
    while(True):
        a = float(input())
        print(f"|{a:.4f}|={abs(a):.4f}")
except EOFError:
    pass