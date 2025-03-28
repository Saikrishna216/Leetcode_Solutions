class Solution {
public:
     bool recur(vector<int>arr, int sum,int n){\
     
     
             vector<vector<bool>> dp(n,vector<bool>(sum+1,false));
        for(int i=0;i<n;i++) dp[i][0]=true;
        if(arr[0]<=sum)dp[0][arr[0]]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                bool not_take=dp[i-1][j];
                bool take=false;
                if(arr[i]<=j)take=dp[i-1][j-arr[i]];
                dp[i][j]=take||not_take;
            }
        }
        return dp[n-1][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2==1)return false;
        int n=nums.size();
        return recur(nums,sum/2,n);
    }
};
