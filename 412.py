n=17
a=[]
for i in range(1,n):
        if(i%3==0 and i%5==0):
                a.append("FizzBuzz")
        elif(i%3==0):
                a.append("Fizz")
        elif(i%5==0):
                a.append("Buzz")
        else:
                a.append(str(i))
print(a)
                