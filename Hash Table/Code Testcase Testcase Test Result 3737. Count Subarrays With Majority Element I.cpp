class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int> freq;
            freq[nums[i]]+=1;
            if(nums[i]==target) ans+=1;
            for(int j=i+1;j<n;j++){
                freq[nums[j]]+=1;
                if(freq[target]>(j-i+1)/2) ans+=1;
            }
        }
        return ans;
    }
};
