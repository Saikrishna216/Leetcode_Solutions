class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m= grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,-1));
        queue<pair<int,int>> q;
        q.push({0,0});
        visited[0][0]=health-grid[0][0];
        vector<pair<int,int>> dirs={{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(auto& [i,j]: dirs){
                int nx= x+i;
                int ny = y+j;
                if(nx<0 || nx>=m || ny<0 || ny>=n) continue;
                if(visited[nx][ny] < visited[x][y]- grid[nx][ny] && visited[x][y]- grid[nx][ny] >= 1){
                    visited[nx][ny]= visited[x][y]- grid[nx][ny];
                    q.push({nx,ny});
                }   
            }
        }
        return visited[m-1][n-1]>=1? true : false;
    }
};
