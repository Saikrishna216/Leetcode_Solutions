class Solution {
public:
    int recur(int low,int high,int zero,int one,int length,vector<int>& dp){
        if(length>high) return 0;
        int ans=0;
        if(dp[length]!=-1)return dp[length];
        if(length<low){
            ans=recur(low,high,zero,one,length+zero,dp)+recur(low,high,zero,one,length+one,dp);
           
        }
        else{
            ans=1+recur(low,high,zero,one,length+zero,dp)+recur(low,high,zero,one,length+one,dp);
            
        }
        return dp[length]=ans;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<long long> dp(high+1,0);
        dp[0]=1;
        const int MOD = 1e9 + 7;
        for (int length = 1; length <= high; ++length) {
            if (length - zero >= 0) {
                dp[length] = (dp[length]+dp[length - zero])%MOD;
            }
            if (length - one >= 0) {
                dp[length] = (dp[length]+dp[length - one])%MOD;
            }
        }
        int result = 0;
        for (int length = low; length <= high; ++length) {
            result = (result+dp[length])%MOD;
        }

        return result;

    }
};
