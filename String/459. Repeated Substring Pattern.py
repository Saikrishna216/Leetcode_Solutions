class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        n=len(s)
        for i in range(1,n+1):
            if n%i==0:
                a=s[:i]
                if a * (n//i)==s:
                    return True if i!=n else False
        return False
