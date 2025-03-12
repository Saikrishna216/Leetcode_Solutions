class Solution:
    def longestPalindrome(self, s: str) -> int:
        count=collections.Counter(s)
        ans=0
        odd=0
        for str,freq in count.items():
            ans+=freq//2
            odd=odd or freq%2
        return ans*2+odd
