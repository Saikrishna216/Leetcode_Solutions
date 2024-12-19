
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """


class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for i in words: 
            if i==i[::-1]:
                return i
        return ""


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
    """

    