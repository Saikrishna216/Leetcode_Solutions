class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long int sum1=0;
        long long int sum2=0;
        int zero_count1=0;
        int zero_count2=0;
        for(int n:nums1) {
            if(n==0) {
                sum1++;
                zero_count1++;
            }
            else sum1+=n;
        }
        for(int n:nums2) {
            if(n==0){
                sum2++;
                zero_count2++;
            } 
            else sum2+=n;
        }
        if(sum1<sum2){
            if(zero_count1==0) return -1;
        }
        if(sum2<sum1){
            if(zero_count2==0) return -1;
        }
        return max<long long int>(sum1,sum2);
    }
};
