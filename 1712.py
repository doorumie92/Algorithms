a,b,c =map(int,input().split())
total = a
i=0
if b == c or b > c:
    i=-1
else:
    if a%(c-b) == 0:
        i = (a/(c-b))+1
    else:
        i=a/(c-b) + 1
if int(i) <= 0:
    i=-1

print(int(i))
