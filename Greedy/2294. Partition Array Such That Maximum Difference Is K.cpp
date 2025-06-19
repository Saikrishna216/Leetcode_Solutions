class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int min=INT_MAX;
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]<min) min=nums[i];
            if(nums[i]-min<=k){
                i++;
               continue ;
            } 
            else {
                ans++;
                min=INT_MAX;
            }
        }
        return ans+1;
    }
};
