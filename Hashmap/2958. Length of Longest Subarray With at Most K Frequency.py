
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """
    
    
    """
    Additional Notes : nil
    """

    
    class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        freq = {}
        n = len(nums)
        ans = 0
        i = 0
        j = 0
        while j < n:
            freq[nums[j]] = freq.get(nums[j], 0) + 1
            while freq[nums[j]] > k:
                freq[nums[i]] -= 1
                i += 1
            ans = max(ans, j - i + 1)
            j += 1
        return ans
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/submissions/1216607342/
    """
    
    