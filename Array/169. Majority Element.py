
    """
    Time complexity : O(nlogn)
    Space complexity : O(1)
    """


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums)//2]


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/majority-element/
    """

    