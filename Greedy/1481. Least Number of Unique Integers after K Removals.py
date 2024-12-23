
    """
    Time complexity : O(nlogn)
    Space complexity : O(n)
    """


from collections import Counter
class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        freq=Counter(arr)
        count=list(freq.values())
        count.sort()
        c=0
        for i in range(len(count)):
            if k>count[i]:
                k-=count[i]
                count[i]=0
            else:
                count[i] -= k
                k=0
            if count[i]!=0:
                c+=1
        return c


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/
    """

    