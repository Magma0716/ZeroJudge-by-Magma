s = input()
ans=""

for i in range(0,len(s)):
    ans += chr(ord(s[i])-7)
print(ans)