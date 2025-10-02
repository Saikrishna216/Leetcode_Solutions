class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int n = s.size();
        int left = 0, ans = 0;

        for(int right = 0; right < n; right++) {
            freq[s[right]]++;
            while(freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
