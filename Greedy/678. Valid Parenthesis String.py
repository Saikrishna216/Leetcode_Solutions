
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """
    
    
    """
    Additional Notes : nil
    """

    
    class Solution:
    def checkValidString(self, s: str) -> bool:
        leftMin, leftMax = 0, 0

        for c in s:
            if c == "(":
                leftMin, leftMax = leftMin + 1, leftMax + 1
            elif c == ")":
                leftMin, leftMax = leftMin - 1, leftMax - 1
            else:
                leftMin, leftMax = leftMin - 1, leftMax + 1
            if leftMax < 0:
                return False
            if leftMin < 0:
                leftMin = 0
        return leftMin == 0
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/valid-parenthesis-string/submissions/1226021089/
    """
    
    