
    """
    Time complexity : O(nlogn)
    Space complexity : O(n)
    """
    
    
    """
    Additional Notes : nil
    """

    
    class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
       ans=""
       s=sorted(strs)
       f=s[0]
       l=s[-1]
       for i in range(min(len(f),len(l))):
            if f[i]!=l[i]:
                return ans
            ans+=f[i]
       return ans
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/longest-common-prefix/submissions/1362390763/
    """
    
    