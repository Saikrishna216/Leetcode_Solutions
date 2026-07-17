class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> graph(n+1);
        for (auto &road : roads) {
            int u = road[0];
            int v = road[1];
            int d = road[2];
            graph[u].push_back({v, d});
            graph[v].push_back({u, d});
        }
        queue<int> q;
        q.push(1);
        int ans=INT_MAX;
        vector<bool> vis(n + 1, false);
        vis[1] = true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto& [reach,weight]: graph[node]){
                ans=min(ans,weight);
                if(!vis[reach]){
                    vis[reach]=true;
                    q.push(reach);
                }
            }
        }
        return ans;    
    }
};
