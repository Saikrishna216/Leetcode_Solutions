class Solution {
public:
    int unique(int row,int column,vector<vector<int>>& matrix,int n,vector<vector<int>> &dp){
        if(column<0 || column>n-1) return 1e9;
        if(row==0)return matrix[row][column];
        if(dp[row][column]!=-1)return dp[row][column];
        int up=matrix[row][column]+unique(row-1,column,matrix,n,dp);
        int up_left=matrix[row][column]+unique(row-1,column-1,matrix,n,dp);
        int up_right=matrix[row][column]+unique(row-1,column+1,matrix,n,dp);
        return dp[row][column]=min(up,min(up_left,up_right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int up=matrix[i][j]+dp[i-1][j];
                int up_left=matrix[i][j];
                if(j-1>=0)up_left+=dp[i-1][j-1];
                else up_left=1e9;
                int up_right=matrix[i][j];
                if(j+1<n)up_right+=dp[i-1][j+1];
                else up_right=1e9;
                dp[i][j]=min(up,min(up_left,up_right));
            }
            
        }
        int mini=1e9;
        for(int i=0;i<n;i++){
            mini=min(dp[n-1][i],mini);
        }
        return mini;
    }
};
