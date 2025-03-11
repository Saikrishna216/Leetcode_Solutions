class Solution {
public:
    int unique(int row,int col,vector<vector<int>>& triangle,vector<vector<int>> &dp,int n){
        if(row==n-1)return triangle[row][col];
        if(dp[row][col]!=-1)return dp[row][col];
        int down=triangle[row][col]+unique(row+1,col,triangle,dp,n);
        int down_right=triangle[row][col]+unique(row+1,col+1,triangle,dp,n);
        return 0;

    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int col=0;col<n;col++)dp[n-1][col]=triangle[n-1][col];
        for(int row=n-2;row>=0;row--){
            for(int col=row;col>=0;col--){
                    int down=triangle[row][col]+dp[row+1][col];
        int down_right=triangle[row][col]+dp[row+1][col+1];
        dp[row][col]=min(down,down_right);
            }
        
        }
        return dp[0][0];
    }
};
