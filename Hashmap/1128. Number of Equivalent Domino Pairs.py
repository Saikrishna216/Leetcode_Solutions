class Solution:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        d = Counter(tuple(sorted(row)) for row in dominoes)
        c=0
        for val in d.values():
            if val>1:
                c+=(val*(val-1)//2)
        return c
