
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """
    
    
    """
    Additional Notes : nil
    """

    
    # Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def tree(nums,start,end):
            if start>end:
                return None
            mid=start+(end-start)//2
            node=TreeNode(nums[mid])
            node.left=tree(nums,start,mid-1)
            node.right=tree(nums,mid+1,end)
            return node
        n=len(nums)
        if n==0:
            return None
        return tree(nums,0,n-1)
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
    """
    
    