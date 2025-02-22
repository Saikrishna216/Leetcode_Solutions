
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """
    
    
    """
    Additional Notes : nil
    """

    
    class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        l=max(nums)
        left,right=0,0
        count,ans=0,0
        while right < len(nums):
            if nums[right]==l:
                count+=1
            while count>=k:
                if nums[left]==l:
                    count-=1
                left+=1
                ans+=len(nums)-right
            right+=1
        return ans
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/submissions/1218272816/
    """
    
    