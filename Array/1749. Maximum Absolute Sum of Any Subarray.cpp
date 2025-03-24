class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_ending_here=nums[0];
        int max_so_far=nums[0];
        for(int i=1;i<nums.size();i++){
            max_ending_here=max(nums[i],max_ending_here+nums[i]);
            cout<<max_ending_here<<endl;
            max_so_far=max(max_so_far,max_ending_here);
        }
        int min_ending_here=nums[0];
        int min_so_far=nums[0];
        for(int i=1;i<nums.size();i++){
            min_ending_here=min(nums[i],min_ending_here+nums[i]);
            cout<<min_ending_here<<endl;
            min_so_far=min(min_so_far,min_ending_here);
        }
        return max(abs(max_so_far),abs(min_so_far));

    }
};
