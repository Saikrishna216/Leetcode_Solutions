class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int max_sum=-1;
        int n =nums.size();
        unordered_map<int,int> hashmap;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int sum=0;
            while(num!=0){
                sum+=(num%10);
                num/=10;
            }
            if(hashmap.count(sum)){
                max_sum=max(max_sum,hashmap[sum]+nums[i]);
                hashmap[sum]=max(hashmap[sum],nums[i]);
                
            }
            else hashmap[sum]=nums[i];
        }
        return max_sum;
    }
};
