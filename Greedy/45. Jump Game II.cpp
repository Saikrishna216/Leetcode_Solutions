class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps=0;
        int currentend=0;
        int farthest=0;
        for(int i=0;i<n-1;i++){
            farthest = max(farthest,nums[i]+i);
            if(i==currentend){
                jumps+=1;
                currentend=farthest;
            }
        }
        return jumps;
    }
};
