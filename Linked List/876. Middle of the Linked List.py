
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow=fast =head
        while fast is not None and fast.next is not None:
            fast=fast.next.next
            slow=slow.next
        return slow


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/middle-of-the-linked-list/
    """

    