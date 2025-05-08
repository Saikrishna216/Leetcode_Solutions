class Solution {
public:
    int dp[1005][1005];
    int mod =1e9+7;

    long long recur(int r1, int r2) {
        if (r1 == 0 && r2 == 0) return 1;
        if (r1 < 0 || r2 < 0) return 0;
        if(dp[r1][r2]!=-1) return dp[r1][r2];
        long long count = 0;

        if (r1 == r2) {
            count += recur(r1 - 2, r2 - 2);
            count += recur(r1 - 1, r2 - 1);
            count += recur(r1 - 1, r2 - 2);
            count += recur(r1 - 2, r2 - 1);
        } else if (r1 > r2) {
            count += recur(r1 - 2, r2);
            count += recur(r1 - 2, r2 - 1);
        } else {
            count += recur(r1, r2 - 2);
            count += recur(r1 - 1, r2 - 2);
        }

        return dp[r1][r2]= count%mod;
    }

    int numTilings(int n) {
        memset(dp,-1,sizeof(dp));
        return recur(n,n);
    }
};
