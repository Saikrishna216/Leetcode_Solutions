class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        int remainder = grid[0][0]%x;
        vector<int> array;
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]%x!=remainder) return -1;
                else array.push_back(grid[i][j]);
            }
        }
        sort(array.begin(),array.end());
        int median = array.size()/2;
        int count =0;
        for(int i =0;i<array.size();i++){
            count+=abs(array[i]-array[median])/x;
        }
        return count;
    }
};
