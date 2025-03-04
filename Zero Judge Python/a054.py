account = {
    10: "A", 11: "B", 12: "C", 13: "D", 14: "E", 15: "F",
    16: "G", 17: "H", 34: "I", 18: "J", 19: "K", 20: "L",
    21: "M", 22: "N", 35: "O", 23: "P", 24: "Q", 25: "R",
    26: "S", 27: "T", 28: "U", 29: "V", 32: "W", 30: "X",
    31: "Y", 33: "Z"
}

Input = input()
lastNum = int(Input[-1])

total = 0
for i in range(1,9,1):
    total += int(Input[-i-1])*i
  
ans = 0  
for key in account:
    ans = total + key%10*9 + key//10*1
    
    if((10-ans%10)%10 == lastNum):
        print(account.get(key),end="")
        

