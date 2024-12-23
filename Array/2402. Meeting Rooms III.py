
    """
    Time complexity : O(nlogn)
    Space complexity : O(n)
    """


class Solution:
    def mostBooked(self, n: int, meetings: List[List[int]]) -> int:
        ans=[0]*n
        times=[0]*n
        meetings.sort()
        for start,end in meetings:
            flag=False
            m=-1
            val=float('inf')
            for j in range(n):
                if times[j] < val:
                    val=times[j]
                    m=j
                if times[j]<=start:
                    flag= True
                    ans[j]+=1
                    times[j]=end
                    break
            if not flag:
                ans[m] +=1
                times[m]+=(end-start)
        maxi = -1
        id = -1
        for i in range(n):
            if ans[i] > maxi:
                maxi = ans[i]
                id = i
        return id


    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/meeting-rooms-iii/
    """

    