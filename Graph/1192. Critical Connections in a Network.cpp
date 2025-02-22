
    /*
    Time complexity : O
    Space complexity : O
    */
    
    
    /*
    Additional Notes : nil
    */

    
    class Solution {
private: 
    int time=1;
    void dfs(vector<int> adj[], vector<int> &visited,int node, int parent,int timer[],int low[],vector<vector<int>> &bridges){
        visited[node]=1;
        timer[node]=low[node]=time;
        time++;
        for(auto it:adj[node]){
            if(it==parent)continue;
            if(visited[it]==0){
                dfs(adj,visited,it,node,timer,low,bridges);
                low[node]=min(low[node],low[it]);
                if(low[it]>timer[node]){
                    bridges.push_back({node,it});
                }

            }
            else{
                low[node]=min(low[node],low[it]);
            }
        }    
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for(auto it: connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> visited(n,0);
        int timer[n];
        int low[n];
        vector<vector<int>> bridges;
        dfs(adj,visited,0,-1,timer,low,bridges);
        return bridges;
    };
};
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/critical-connections-in-a-network/
    */
    
    