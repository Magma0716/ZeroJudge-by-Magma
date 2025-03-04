#西元年被4整除且不被100整除,或被400整除者即為閏年
try:
    while(True):
        year = int(input())
        if((year%4==0) & (year%100!=0) | (year%400==0)):
            print("閏年")
        else:
            print("平年")
except EOFError:
    pass