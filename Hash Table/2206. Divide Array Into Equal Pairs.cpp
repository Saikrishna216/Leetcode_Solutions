class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int n:nums) hashmap[n]++;
        for(auto &it:hashmap){
            if(it.second & 1) return false; 
        }
        return true;
    }
};
