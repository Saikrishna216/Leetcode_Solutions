class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ending_so_far=nums[0];
        int max_so_far=nums[0];
        for(int i=1;i<nums.size();i++){
            max_ending_so_far=max(nums[i],nums[i]+max_ending_so_far);
            max_so_far=max(max_so_far,max_ending_so_far);
        }
        return max_so_far;
    }
};
