
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
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        curr=head
        l=[]
        while curr:
            l.append(curr.val)
            curr=curr.next
        return l==l[::-1]
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/palindrome-linked-list/submissions/1210943155/
    """
    
    