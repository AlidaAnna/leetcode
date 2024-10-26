x=[7,1,5,3,6,4]
for i in range(1,len(x)):
    for j in range(2,len(x)):
        p=x[i]-x[j]
        max=p
        if (max<p):
            max=p
print(max)