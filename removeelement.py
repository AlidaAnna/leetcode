nums=[0,1,2,2,3,0,4,2]
val=0
l=0
for r in range(0,len(nums)):
    if(nums[r]!=val):
        nums[l]=nums[r]
        l=l+1
print(l)