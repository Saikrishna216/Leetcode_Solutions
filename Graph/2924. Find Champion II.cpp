class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        unordered_map<int, int> degree;
        for (int i = 0; i < n; ++i) {
            degree[i] = 0;
         }
        for(int i=0;i<edges.size();i++){
            degree[edges[i][1]]+=1;
        }
        int zerocount=0;
        vector<int> keys;
        for (const auto& [key, value] : degree) {
        if (value == 0) {
            zerocount++;
            keys.push_back(key);
        }
        }
        if(zerocount==1){
            return keys[0];
        }
        else{
            return-1;
        }
    }
    
};
