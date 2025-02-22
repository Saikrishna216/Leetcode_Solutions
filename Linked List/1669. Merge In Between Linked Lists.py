
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
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        ptr=list1
        for i in range(a-1):
            ptr=ptr.next
        qtr=ptr.next
        for i in range(b-a+1):
            qtr = qtr.next
        
        ptr.next = list2
        while list2.next:
            list2 = list2.next
        list2.next = qtr
        
        return list1
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/merge-in-between-linked-lists/submissions/1208993325/
    """
    
    