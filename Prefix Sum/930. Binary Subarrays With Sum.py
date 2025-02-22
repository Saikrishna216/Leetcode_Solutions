
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """
    
    
    """
    Additional Notes : NIL
    """

    
    class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        count = 0  
        prefix_sum = 0 
        sum_counts = {0: 1}  

        for num in nums:
            prefix_sum += num
            if prefix_sum - goal in sum_counts:
                count += sum_counts[prefix_sum - goal]
            sum_counts[prefix_sum] = sum_counts.get(prefix_sum, 0) + 1

        return count
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/binary-subarrays-with-sum/submissions/1203686769/
    """
    
    