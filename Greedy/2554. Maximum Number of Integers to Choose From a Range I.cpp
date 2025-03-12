class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        ban=set(banned)
        ans=0
        sum=0
        for i in range(1,n+1):
            if i in ban:
               continue
            else:
                if sum+i > maxSum:
                    break
                sum+=i
                ans+=1
        return ans
