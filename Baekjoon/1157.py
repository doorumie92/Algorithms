str = input()
str = str.upper()
str = list(str)
strCheck = 'ABCDEFGHIJKLMNOPQRSTRVWXYZ'
strCheck = list(strCheck)
temp=0
for i in range(len(strCheck)):
    k=str.count(strCheck[i])
    if temp > k:
        continue
    elif temp < k:
        temp = k
        tempstr = strCheck[i]
    else:
        tempstr='?'

print(tempstr)
