def calculate(number,symbol):
    while(not(number==[]) and not(symbol==[])):
            if(len(symbol)>=2 and symbol[0]=='+' and symbol[1]=='*'):  
                number[0]=number[0]+number[1]*number[2]
                symbol.pop(0),symbol.pop(0),number.pop(1),number.pop(1)
            elif(len(symbol)>=2 and symbol[0]=='-' and symbol[1]=='*'):  
                number[0]=number[0]-number[1]*number[2]
                symbol.pop(0),symbol.pop(0),number.pop(1),number.pop(1)
            elif(len(symbol)>=2 and symbol[0]=='+' and symbol[1]=='/'):  
                number[0]=number[0]+number[1]//number[2]
                symbol.pop(0),symbol.pop(0),number.pop(1),number.pop(1)
            elif(len(symbol)>=2 and symbol[0]=='-' and symbol[1]=='/'):  
                number[0]=number[0]-number[1]//number[2]
                symbol.pop(0),symbol.pop(0),number.pop(1),number.pop(1)
            elif(len(symbol)>=2 and symbol[0]=='+' and symbol[1]=='%'):  
                number[0]=number[0]+number[1]%number[2]
                symbol.pop(0),symbol.pop(0),number.pop(1),number.pop(1)
            elif(len(symbol)>=2 and symbol[0]=='-' and symbol[1]=='%'):  
                number[0]=number[0]-number[1]%number[2]
                symbol.pop(0),symbol.pop(0),number.pop(1),number.pop(1)
            elif(symbol[0]=='+'):
                number[0]=number[0]+number[1]
                symbol.pop(0),number.pop(1)
            elif(symbol[0]=='-'):
                number[0]=number[0]-number[1]
                symbol.pop(0),number.pop(1)
            elif(symbol[0]=='*'):
                number[0]=number[0]*number[1]
                symbol.pop(0),number.pop(1)
            elif(symbol[0]=='/'):
                number[0]=number[0]//number[1]
                symbol.pop(0),number.pop(1)
            elif(symbol[0]=='%'):
                number[0]=number[0]%number[1]
                symbol.pop(0),number.pop(1)
    return number[0]
try: 
    while(True):
        number=[]
        symbol=[]
        math=input()
        for i in math:
            if(i.isdigit()):
                number.append(int(i))
            elif(i==" "):
                continue
            else:
                symbol.append(i)

        #kill()
        while(("(" in math) and (")" in math)):
            left=0
            right=0
            tnumber=[]
            tsymbol=[]
            j=0
            for i in math.split(" "):
                if(i.isdigit() or (i.startswith('-') and i[1:].isdigit())):
                    tnumber.append(int(i))
                elif(i==" "):
                    continue
                elif(i=="("):
                    tnumber=[]
                    tsymbol=[]
                    left=j
                elif(i==")"):
                    right=j
                    break
                else:
                    tsymbol.append(i)
                j+=1
            
            tar=""
            for i in range(left,right+1):
                tar+=math.split(" ")[i]+" "
            tar = tar[0:-1:]
            
            math = math.replace(tar,str(calculate(tnumber,tsymbol)))
            
        #final    
        number=[]
        symbol=[]
        for i in math.split(" "):
            if(i.isdigit() or (i.startswith('-') and i[1:].isdigit())):
                number.append(int(i))
            elif(i==" "):
                continue
            else:
                symbol.append(i)        
        print(calculate(number,symbol))
except EOFError:
    pass