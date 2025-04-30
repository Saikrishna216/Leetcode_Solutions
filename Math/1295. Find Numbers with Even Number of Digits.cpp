class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int n : nums){
            int n_count=0;
            while(n!=0){
                n=n/10;
                n_count++;
            }
            if(n_count%2==0) count++;
        }
        return count;   }
};
