class Solution {
public:
    int unique(int row,int column ,vector<vector<int>> grid,vector<vector<int>> &dp){
        if(row==0 && column==0)return grid[0][0];
         if(row<0 ||column<0) return 1e9 ;
        if(dp[row][column]!=-1)return dp[row][column];
        int up=grid[row][column]+unique(row-1,column,grid,dp);
        int left=grid[row][column]+unique(row,column-1,grid,dp);
        return dp[row][column]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int column=grid[0].size();
        int dp[row][column];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(i==0 && j==0) dp[i][j]= grid[i][j];
                else{
                    int up=grid[i][j];
                    int left=grid[i][j];
                    if(i>0) up+=dp[i-1][j];
                    else up+=1e9;
                    if(j>0) left+=dp[i][j-1];
                    else left+=1e9;
                    dp[i][j]=min(up,left);
                }
       
            }
        }
        return dp[row-1][column-1];
    }
};
