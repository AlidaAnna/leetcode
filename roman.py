s='MCMXCIV'
hm={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
sum=0
n=len(s)
print(n)
for i in range(n):
    if i+1<n and hm[s[i]]<hm[s[i+1]]:
        sum=sum-hm[s[i]]
    else:
         sum=sum+hm[s[i]]
print(sum)
