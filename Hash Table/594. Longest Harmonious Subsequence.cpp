class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int max_length = 0;
        for (auto& [num, count] : freq) {
            if (freq.count(num + 1)) {
                max_length = max(max_length, count + freq[num + 1]);
            }
        }

        return max_length;
    }
};
