class Solution {
public:
    int unique(int m, int n,vector<vector<int>> &dp){
        if(m==0 && n==0) return 1;
        if(m<0 || n<0) return 0;
        if(dp[m][n]!=-1)return dp[m][n];
        int up=unique(m-1,n,dp);
        int left=unique(m,n-1,dp);
        return dp[m][n]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        dp[0][0]=1;
        for(int row=0;row<m;row++){
            for(int column=0;column<n;column++){
                if(row==0 && column==0) dp[row][column]=1;
                else{
                    int up=0;
                    int left=0;
                    if(row>0) up=dp[row-1][column];
                    if(column>0)left=dp[row][column-1];
                    dp[row][column]=up+left;
                }
                
            }
       }
        return dp[m-1][n-1];
    }
};
