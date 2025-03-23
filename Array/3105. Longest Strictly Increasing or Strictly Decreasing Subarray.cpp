class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if (n<2) return n;
        int max_count=-1e9;
        for(int i=0;i<n-1;i++){
            int count=1;
            int j=i;
            if(nums[i]<nums[i+1]){
                while(j<n-1){
                    if(nums[j]<nums[j+1]) {
                        count++;
                    }
                    else break;
                    j++;
                }
            }
            else{
                while(j<n-1){
                    if(nums[j]>nums[j+1]){
                        count++;
                    } 
                    else break;
                    j++;
                }
            }
            max_count=max(count,max_count);
        }
        return max_count;
    }
};
