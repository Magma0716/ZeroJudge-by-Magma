import math as m
arr=1
for i in range(2,101):
    arr*=m.factorial(i)
for i in str(arr):
    print(i)