class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int a:arr) freq[a]++;
        int ans=-1;
        for(auto& a:freq){
            if(a.first==a.second && ans<a.first) ans=a.first;
        }
        return ans;
    }
};
