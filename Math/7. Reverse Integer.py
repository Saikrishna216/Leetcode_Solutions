class Solution:
    def reverse(self, x: int) -> int:
        x1=str(x)
        if x1[0]== '-':
            res=int(x1[1:][::-1])*-1
        else:
            res=int(x1[::-1])
        if res<-2**31 or res> 2**31:
            return 0
        return res
