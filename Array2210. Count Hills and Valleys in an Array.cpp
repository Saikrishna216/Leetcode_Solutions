class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int left,right;
        for(int i=1;i<n-1;i++){
            left=nums[i-1];
            if(nums[i]==nums[i+1]){
                for(int j=i+1;j<n;j++) {
                    if(nums[i]!=nums[j]) {
                        right=nums[j];
                        break;
                    }
                }
            } 
            else right=nums[i+1];
            if((nums[i]>left && nums[i]>right)||(nums[i]<left && nums[i]<right)){
                ans++;
                cout<<nums[i]<<endl;
            }
        }
        return ans;
    }
};
