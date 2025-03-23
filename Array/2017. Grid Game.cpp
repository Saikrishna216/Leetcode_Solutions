class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        if(grid[0].size()<2) return 0;
        long long int topsum=0;
        long long int minsum = LLONG_MAX;
        long long int bottomsum=0;
        for(int i=0;i<grid[0].size();i++) topsum+=grid[0][i];
        for(int i=0;i<grid[0].size();i++){
            topsum-=grid[0][i];
            minsum=min(minsum,max(topsum,bottomsum));
            bottomsum+=grid[1][i];
        }
        return minsum;
    }
};
