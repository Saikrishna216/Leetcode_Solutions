class Solution {
public:
    int bfs(int start, int end, int n, const vector<vector<int>>& graph) {
        vector<int> dist(n, INT_MAX);
        queue<int> q;
        dist[start] = 0;
        q.push(start);

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (int u : graph[curr]) {
                if (dist[u] > dist[curr] + 1) {
                    dist[u] = dist[curr] + 1;
                    q.push(u);
                }
            }
        }

        return dist[end];
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> adjlist(n);
        vector<int> distances;
        for(int i=0;i<n-1;i++){
            adjlist[i].push_back(i+1);
        }
        for(auto &edge:queries){
            adjlist[edge[0]].push_back(edge[1]);
            distances.push_back(bfs(0,n-1,n,adjlist));
        }
        return  distances;
    }
};
