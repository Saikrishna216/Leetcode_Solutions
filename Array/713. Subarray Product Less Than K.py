
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """
    
    
    """
    Additional Notes : nil
    """

    
    class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if k <= 1:
            return 0

        left, right, product, count = 0, 0, 1, 0
        n = len(nums)

        while right < n:
            product *= nums[right]
            while product >= k:
                product //= nums[left]
                left += 1
            count += 1 + (right - left)
            right += 1

        return count
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/subarray-product-less-than-k/submissions/1215637022/
    """
    
    