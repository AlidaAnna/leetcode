s=[-1,0,3,5,9,12]
s.sort()
l=len(s)-1
print(l)
u=0
t=2
while(u<=l):
    mid=(u+l)//2
    if(s[mid]==t):
        print(mid)
        break
    elif(s[mid]>t):
        l=mid-1
    else:
        u=mid+1
else:
    print(-1)
        
