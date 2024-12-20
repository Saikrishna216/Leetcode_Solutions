
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """


class Solution:
    def returnToBoundaryCount(self, nums: List[int]) -> int:
        s = 0
        c=0
        for i in range(len(nums)):
            s+=nums[i]
            if s==0:
                c+=1
        return c


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/ant-on-the-boundary/
    """

    