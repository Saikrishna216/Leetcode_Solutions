class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int c=0;
        while(i<n-2){
            if(!nums[i]){
                for(int j=i;j<i+3;j++) nums[j] ^= 1;
                c++;
            }
            i++;
        }
        if(nums[n-1]&&nums[n-2]) return c;
        return -1;
    }
};
