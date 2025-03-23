class Solution {
public:
    vector<bool> safe_hands;
    bool dfs(vector<vector<int>>& graph,vector<int>& visited,int i){
        visited[i]=1;
        bool is_safe=true;
        for(int neighbour:graph[i]){
            if(visited[neighbour]==0) is_safe&=dfs(graph,visited,neighbour);
            else if(visited[neighbour]==1) return safe_hands[i]=false;
            else if(visited[neighbour]==2){
                is_safe&=safe_hands[neighbour];
            }
        }
        visited[i]= 2;
        return safe_hands[i]=is_safe;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        safe_hands=vector<bool>(n,true);
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0) dfs(graph,visited,i);
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(safe_hands[i]==true) res.push_back(i);
        }
        return res;
    }
};
