
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */
    
    
    /*
    Additional Notes : nil
    */

    
    class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(right>left){
            right=right&(right-1);
        }
        return right;
    }
};
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/bitwise-and-of-numbers-range/
    */
    
    