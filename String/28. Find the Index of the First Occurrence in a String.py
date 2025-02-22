
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """
    
    
    """
    Additional Notes : nil
    """

    
    class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        for i in range(len(haystack)):
            if haystack[i:i+len(needle)]==needle:
                return i
        return -1
            

    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1363097708/
    """
    
    