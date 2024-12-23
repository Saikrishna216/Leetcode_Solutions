
    """
    Time complexity : O(nlogn)
    Space complexity : O(n)
    """


class Solution:
    def furthestBuilding(self, heights: List[int], bricks: int, ladders: int) -> int:
        n = len(heights)
        heap=[]
        for i in range(1, n):  
            jump=heights[i]-heights[i-1]
            if jump>0:
                heapq.heappush(heap, jump)
            if len(heap)>ladders:
                bricks-= heapq.heappop(heap)
                if bricks < 0: return i-1
        return n-1


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/furthest-building-you-can-reach/
    """

    