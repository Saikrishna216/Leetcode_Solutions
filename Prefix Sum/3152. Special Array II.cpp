class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> ans;
        vector<int> prefix_sum(nums.size(),0);
        prefix_sum[0]=1;
        for(int i=1;i<nums.size();i++){
            if((nums[i]&1) != (nums[i-1]&1)) prefix_sum[i]=prefix_sum[i-1]+1;
            else prefix_sum[i]=1;   
        }
        for(auto& range:queries){
            if(prefix_sum[range[1]]>=(range[1]-range[0])+1) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    
    }
};
