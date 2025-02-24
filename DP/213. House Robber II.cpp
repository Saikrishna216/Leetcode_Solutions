
    /*
    Time complexity : O(n2)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : nil
    */

    
    class Solution {
public:
int rob1(vector<int>& nums) {
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
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> temp1;
        vector<int> temp2;
        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(rob1(temp1),rob1(temp2));

    }
};
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/house-robber-ii/
    */
    
    