
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """
    
    
    """
    Additional Notes : NIL
    """

    
    class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        answer = [0] * n

        # Calculate the prefix products
        prefix_product = 1
        for i in range(n):
            answer[i] = prefix_product
            prefix_product *= nums[i]

        # Calculate the suffix products and update the answer array
        suffix_product = 1
        for i in range(n - 1, -1, -1):
            answer[i] *= suffix_product
            suffix_product *= nums[i]

        return answer
        
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/product-of-array-except-self/submissions/1204733193/
    """
    
    