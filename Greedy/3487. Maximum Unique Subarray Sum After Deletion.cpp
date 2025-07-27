class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int& a:nums) freq[a]++;
        int ans=0;
        for(auto& val:freq){
            if(val.first>0) ans+=val.first;
        }
        if(ans==0) return *max_element(nums.begin(),nums.end());
        return ans;
    }
};
