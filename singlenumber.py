nums=[2,2,1]
s=set()
for i in range(len(nums)):
    if nums[i] in s:
        s.remove(nums[i])
    else:
        s.add(nums[i])
print(s.pop())