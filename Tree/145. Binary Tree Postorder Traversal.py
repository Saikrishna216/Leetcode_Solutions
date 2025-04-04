
    """
    Time complexity : O(n)
    Space complexity : O(1)
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
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        num=[]
        def f(root):
            if root==None: return num
            f(root.left)
            f(root.right)
            num.append(root.val)
            return num
        return f(root)
        
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/binary-tree-postorder-traversal/
    """
    
    