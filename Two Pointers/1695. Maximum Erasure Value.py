class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        win_sum=0
        max_sum=0
        s=set()
        l,r=0,0
        while r<len(nums):
            if nums[r] not in s:
                win_sum+=nums[r]
                s.add(nums[r])
                r+=1
                max_sum=max(max_sum,win_sum)
            else:
                win_sum-=nums[l]
                s.remove(nums[l])
                l+=1
        return max_sum
                
.py
