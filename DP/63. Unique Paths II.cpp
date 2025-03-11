class Solution {
public:
int unique(int row, int column,vector<vector<int>> grid,vector<vector<int>> &dp){
    if(row<0 || column<0 || grid[row][column]==1) return 0;
        if(row==0 && column==0) return 1;
        
        if(dp[row][column]!=-1)return dp[row][column];
        int up=unique(row-1,column,grid,dp);
        int left=unique(row,column-1,grid,dp);
        return dp[row][column]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row=obstacleGrid.size();
        int column= obstacleGrid[0].size();
        int dp[row][column];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(obstacleGrid[i][j]==1) dp[i][j]=0;
                else if(i==0 && j==0) dp[i][j]=1;
                else{
                    int up=0;
                    int left=0;
                    if(i>0)  up=dp[i-1][j];
                    if(j>0)  left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        
        
        }
        return dp[row-1][column-1];
    }
    
};
