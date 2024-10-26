s=[2,5,0,0]
l=len(s)
i=0
while(i<l):
    temp=s[i]
    if temp==0 and i<=l-1:
        print("False")
        break
    i=i+temp
    if(i>=l-1):
        print("true")
        break
else:
    print("False")
