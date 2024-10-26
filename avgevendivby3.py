nums=[1,3,4,6,12,11]
sum=0
count=0
for i in range(len(nums)):
    if(nums[i]%2==0):
        if(nums[i]%3==0):
            sum=sum+nums[i]
            count=count+1
avg=sum/count
print(avg)
        