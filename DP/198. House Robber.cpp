
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */
    
    
    /*
    Additional Notes : nil
    */

    
    class Solution {
public:
    int rob(vector<int>& nums) {
         int n=nums.size();
         if (n == 0) return 0; 
        if (n == 1) return nums[0]; 
         int prev1=0;
         int prev=nums[0];
         for(int idx=1;idx<n;idx++){
            int pick=nums[idx];
            if(idx>1)  pick=pick+prev1;
            int not_pick=prev;
            int curr=max(pick,not_pick);
            prev1=prev;
            prev=curr;
         }
         

   
    return prev;
}
};
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/house-robber/
    */
    
    