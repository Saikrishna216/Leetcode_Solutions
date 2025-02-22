
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """
    
    
    """
    Additional Notes : nil
    """

    
    # Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        currentnode=head
        prev=None
        while currentnode is not None:
            next=currentnode.next
            currentnode.next=prev
            prev=currentnode
            currentnode=next
        return prev
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/reverse-linked-list/submissions/1210043903/
    """
    
    