s="Alidahee"
vow="aeiouAEIOU"
l=list(s)
for i in range(0,len(l)):
        for j in range(len(l)-1,-1,-1):       
                if(l[i] in vow):
                        temp=l[i]
                        l[i]=l[j]
                        l[j]=temp
for i in range(0,len(l)):
        print(l[i])
        
