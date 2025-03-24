class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> ans;
        int zero_count=0;
        int n=nums.size();
     for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i]*=2;
            nums[i+1]*=0;
        }
        if(nums[i]!=0)ans.push_back(nums[i]);
        else zero_count++;
     }   
     if(nums[n-1]!=0)ans.push_back(nums[n-1]);
     else zero_count++;
     for(int i=0;i<zero_count;i++) ans.push_back(0);
     return ans;
    }
};
