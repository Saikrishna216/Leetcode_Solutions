class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int t_sum=0;
        for(int i=0;i<nums.size();i++) t_sum+=nums[i];
        long long sum=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            if(sum>=t_sum-sum) count++;
        }
        return count;
    }
};
