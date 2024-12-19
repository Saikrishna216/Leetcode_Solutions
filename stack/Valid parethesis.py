
    """
    Time complexity : Easy
    Space complexity : O(n)
    """


class Solution:
    def isValid(self, s: str) -> bool:

        #create empty stack
        stack = []
        #keys left, values right
        mapping = {')':'(','}':'{',']':'['}

        for char in s:
            if char in mapping.values():
                stack.append(char)
            elif char in mapping.keys():
                if not stack or stack.pop() != mapping[char]: #if they don't match you leave with false
                    return False
        return len(stack)==0


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/valid-parentheses/description/
    """

    