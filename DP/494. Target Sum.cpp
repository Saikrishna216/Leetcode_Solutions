class Solution {
public:
    int recur(vector<int>& nums, int target, int n, int val, vector<vector<int>>& dp, int offset) {
        if (n == 0) {
            return (val + nums[n] == target) + (val - nums[n] == target);
        }
        if (dp[n][val + offset] != -1) return dp[n][val + offset];
        dp[n][val + offset] = recur(nums, target, n - 1, val + nums[n], dp, offset) +
                              recur(nums, target, n - 1, val - nums[n], dp, offset);
        return dp[n][val + offset];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int num : nums) sum += num;
        int offset = sum;
        vector<vector<int>> dp(nums.size(), vector<int>(2 * sum + 1, -1));
        return recur(nums, target, nums.size() - 1, 0, dp, offset);
    }
};
