class Solution {
public:
    long recur(int n , int amount, vector<int>& coins,vector<vector<int>> &dp){
        if(n==0){
            return (amount%coins[0]==0);
        }
        if(dp[n][amount]!=-1)return dp[n][amount];
        long not_take=0+recur(n-1,amount,coins,dp);
        long take=0;
        if(coins[n]<=amount)take=recur(n,amount-coins[n],coins,dp);
        return dp[n][amount]=take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return recur(n-1,amount,coins,dp);
    }
};
