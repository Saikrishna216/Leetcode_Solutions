class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        indexed = list(enumerate(nums))
        top_k = sorted(indexed, key=lambda x: x[1], reverse=True)[:k]
        top_k.sort(key=lambda x: x[0])
        return [val for idx, val in top_k]
