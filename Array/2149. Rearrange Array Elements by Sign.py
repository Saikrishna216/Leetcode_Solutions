
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """


class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos,neg,res=[],[],[]
        for i in range(len(nums)):
            if nums[i]>0:
                pos.append(nums[i])
            else:
                neg.append(nums[i])
        i=0
        while i<len(nums)//2:
            res.append(pos[i])
            res.append(neg[i])
            i+=1
        return res


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/rearrange-array-elements-by-sign/
    """

    