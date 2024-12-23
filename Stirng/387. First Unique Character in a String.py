
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """


from collections import Counter
class Solution:
    def firstUniqChar(self, s: str) -> int:
        dict=Counter(s)
        for i in range(len(s)):
            if dict[s[i]]==1:
                return i
        return -1


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/first-unique-character-in-a-string/
    """

    