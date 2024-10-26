nums=[1,0,2,0,12]
l=0
for r in range(len(nums)):
    if nums[r]!=0:
        nums[l],nums[r]=nums[r],nums[l]
        l=l+1
print(nums)