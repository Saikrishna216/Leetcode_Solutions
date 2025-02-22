
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
    def reorderList(self, head):
        fast=head
        slow=head
        while fast and fast.next:
            fast=fast.next.next
            slow=slow.next
        prev,curr=None,head
        while curr:
            next=curr.next
            curr.next=prev
            prev=curr
            curr=next
        first,second=head,prev
        while second.next:
            # Save next pointers
            tmp1 = first.next
            tmp2 = second.next
            
            # Reorder nodes
            first.next = second
            second.next = tmp1
            
            # Move pointers forward
            first = tmp1
            second = tmp2
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/reorder-list/
    """
    
    