nums=[1,2,2,1,1,0]
for i in range(len(nums)-1):
    if (nums[i]==nums[i+1]):
        nums[i]=nums[i]*2
        nums[i+1]=0
l=0
for r in range(len(nums)):
    if nums[r]!=0:
        nums[l],nums[r]=nums[r],nums[l]
        l=l+1
print(nums)

