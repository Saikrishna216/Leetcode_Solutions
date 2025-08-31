class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //the max bitwise and value is equal to the max value of the array. So this approach
        int max_value=*max_element(nums.begin(),nums.end());
        int curr_len=0;
        int max_len=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max_value){
                curr_len++;
                max_len=max(max_len,curr_len);
            }
            else curr_len=0;
        }
        return max_len;
    }
};
