class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]+(i-1) >= goal) goal=i-1;
        }
        return goal==0;
    }
};
