class Solution {
public:
    int recur(int n,int m,string s, string t,  vector<vector<int>>& dp){
        if(n<0 || m<0){
            return 0;
        }
        if(dp[n][m]!=-1)  return dp[n][m];
        if(s[n]==t[m]) return dp[n][m]=1+recur(n-1,m-1,s,t,dp);
        else{
            return dp[n][m]=max(recur(n-1,m,s,t,dp),recur(n,m-1,s,t,dp));
        }
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        string t=s;
        reverse(t.begin(),t.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        for (int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=n;i++) dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else{
             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
            }
        }
        return dp[n][n];
    }
};
