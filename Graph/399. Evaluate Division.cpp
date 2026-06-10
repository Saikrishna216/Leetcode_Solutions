class Solution {
public:
    double dfs(unordered_map<string,vector<pair<string,double>>>& graph,string curr, string divi, 
        double product, unordered_set<string>& visited){
        if(curr==divi) return product;
        double ans=-1.0;
        for(auto& [next,val]: graph[curr]){
            if(visited.count(next)) continue;
            visited.insert(curr);
            ans=dfs(graph,next,divi,product*val,visited);
            if(ans!=-1) return ans;
        }
        return ans;
    }


    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string,double>>> graph;
        for(int i=0;i<equations.size();i++){
            graph[equations[i][0]].push_back({equations[i][1],values[i]});
            graph[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
        }
        vector<double> ans;
        
        for(auto& q: queries){
            unordered_set<string> visited;
            if(!graph.count(q[0]) || !graph.count(q[1])){
                ans.push_back(-1.0);
                continue;
            }
            ans.push_back(dfs(graph, q[0],q[1],1.0,visited));
        }
        return ans;
    }
};
