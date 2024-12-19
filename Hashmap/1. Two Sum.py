
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict={}
        for i,j in enumerate(nums):
            r=target-j
            if r in dict:
                return[i,dict[r]]
            else:
                dict[j]=i
        return 0


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/two-sum/
    """

    