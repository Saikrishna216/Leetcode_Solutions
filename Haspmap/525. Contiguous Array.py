
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """
    
    
    """
    Additional Notes : Nil
    """

    
    class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        hashmap = {}
        summation = 0
        max_length = 0
        for i, num in enumerate(nums):
            if num == 0:
                summation -= 1
            elif num == 1:
                summation += 1
            if summation == 0:
                max_length = i + 1
            elif summation in hashmap:
                max_length = max(max_length, i - hashmap[summation])
            else:
                hashmap[summation] = i
        return max_length
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/contiguous-array/submissions/1205462762/
    """
    
    