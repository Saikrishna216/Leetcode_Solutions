
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """


class Solution:
    def isPalindrome(self, x: int) -> bool:
        s=str(x)
        if s==s[::-1]:
            return True
        return False


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/palindrome-number/
    """

    