class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        int current_sum=0;
        unordered_map<int, int> hashmap;
        hashmap[0] = 1;
        for(int i=0;i<nums.size();i++){
            current_sum+=nums[i];
            int diff=current_sum-k;
            if(hashmap.find(diff)!=hashmap.end()){
                res+=hashmap[diff];
            }
            hashmap[current_sum]+=1;
        }
        return res;
    }
};
