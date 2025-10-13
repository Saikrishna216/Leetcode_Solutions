class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        ans=0
        for char in set(s):
            changed=0
            left=0
            for i in range(len(s)):
                if s[i]!=char:
                    changed+=1
                    while changed>k:
                        if(s[left]!=char):
                            changed-=1
                        left+=1
                ans=max(ans,i-left+1)      
        return ans
