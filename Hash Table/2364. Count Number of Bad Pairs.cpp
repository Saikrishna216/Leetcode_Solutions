class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long int n = nums.size();
        unordered_map<int,int> hashmap;
        long long int good_pairs=0;
        long long int total_pairs=(n*(n-1))/2;
        for(int i=0;i<n;i++){
            hashmap[nums[i]-i]++;
            if(hashmap[nums[i]-i]>1)good_pairs+=hashmap[nums[i]-i]-1;
        }
        return total_pairs-good_pairs;
    }
};
