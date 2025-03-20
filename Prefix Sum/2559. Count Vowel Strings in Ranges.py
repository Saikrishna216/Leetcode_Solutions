class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowels=('a','e','i','o','u')
        prefix_sum=[0]*(len(words)+1)
        for i in range(len(words)):
            prefix_sum[i+1]=prefix_sum[i]+(1 if words[i][0] in vowels and words[i][-1] in vowels else 0)
        ans=[]
        for query in queries:
            ans.append(prefix_sum[query[1]+1]-prefix_sum[query[0]])
        return ans
