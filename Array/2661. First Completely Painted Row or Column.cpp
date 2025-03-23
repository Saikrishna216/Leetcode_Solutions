class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<pair<int,int>> lookup(m*n+1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                lookup[mat[i][j]] =make_pair(i,j);
            }
        }
        vector<int> row(m,0);
        vector<int> col(n,0);
        for(int i=0;i<arr.size();i++){
            auto [r,c] = lookup[arr[i]];
            row[r]++;
            col[c]++;
            if(row[r]==n || col[c]==m ) return i;
        }
        return 0;
    }
};
