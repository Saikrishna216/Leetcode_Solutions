
    """
    Time complexity : O(n)
    Space complexity : O(1)
    """
    
    
    """
    Additional Notes : nil
    """

    
    class Solution:
    def romanToInt(self, s: str) -> int:
        roman={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        number=0
        for a in range(len(s)-1):
            if roman[s[a]]<roman[s[a+1]]:
                number-=roman[s[a]]
            else:
                number+=roman[s[a]]
        return number+roman[s[len(s)-1]]
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/roman-to-integer/submissions/1339846074/
    """
    
    