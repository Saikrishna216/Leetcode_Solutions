class Solution {
public:
    static const int MOD = 1000000007;

    int ipow(int base, int exp) {
        int res = 1;
        while (exp > 0) {
            if (exp & 1) res *= base;
            base *= base;
            exp >>= 1;
        }
        return res;
    }

    int recur(int n, int val, int x, int sum, vector<vector<int>>& dp) {
        if (sum == n) return 1;
        if (sum > n || val == 0) return 0;
        if (dp[val][sum] != -1) return dp[val][sum];

        long pick = 0;
        int power = ipow(val, x);
        if (sum + power <= n) {
            pick = recur(n, val - 1, x, sum + power, dp);
        }
        long n_pick = recur(n, val - 1, x, sum, dp);

        return dp[val][sum] = (pick + n_pick) % MOD;
    }

    int numberOfWays(int n, int x) {
        int maxVal = 1;
        while (ipow(maxVal + 1, x) <= n) maxVal++;
        vector<vector<int>> dp(maxVal + 1, vector<int>(n + 1, -1));
        return recur(n, maxVal, x, 0, dp);
    }
};
