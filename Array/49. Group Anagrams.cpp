class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> frequency;
        for(string &s: strs){
            string k= s;
            sort(k.begin(),k.end());
            frequency[k].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& a: frequency){
            ans.push_back(a.second);
        }
        return ans;
    }
};
