n=int(input())

for i in range(1,n+1):
    money,ppl=map(int,input().split())
    
    normal=money//ppl
    remain=money%ppl
    
    print(f"Case {i} :")
    for j in range(1,ppl+1):
        if(j==ppl):
            print(f"第{j}位 : 拿{normal+remain}元並說DD! BAD!")
        else:
            print(f"第{j}位 : 拿{normal}元並說DD! BAD!")  