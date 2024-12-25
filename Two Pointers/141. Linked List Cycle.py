
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if not head or not head.next:
            return False
        
        slow =head
        fast =head

        while fast.next and fast.next.next:
            fast = fast.next.next
            slow = slow.next

            if slow == fast:
                return True

        return False


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/linked-list-cycle/
    """

    