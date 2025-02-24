
    /*
    Time complexity : O(n)
    Space complexity : O(k)
    */
    
    
    /*
    Additional Notes : nil
    */

    
    class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> frequency(k,0);
        for(auto it:arr){
            int rem = it%k;
            if (rem<0) rem+=k;
            frequency[rem]++;
        }
        if(frequency[0]%2!=0)return false;
        for (int i = 1; i <= k / 2; i++) {
            if (frequency[i] != frequency[k - i]) {
                return false;
            }
        }
        
        return true;
    }
};
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/
    */
    
    