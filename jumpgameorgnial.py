s=[2,5,0,0]
l=len(s)
goal=l-1
for i in range (l-1,-1,-1):
    if i+s[i]>=goal:
        goal=i
if goal==0:
    print ('t')
else:
    print('f')