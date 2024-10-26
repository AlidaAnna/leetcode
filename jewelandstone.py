ja="z"
sa="ZZ"
lj=len(ja)
ls=len(sa)
print(ls)
print(lj)
count=0
for i in range(lj):
    for j in range(ls):
        if ja[i]==sa[j]:
            count=count+1
print(count)