
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : nil
    */

    
    class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int> ans;
        while(i<j){
            if ((numbers[i]+numbers[j]) == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if ((numbers[i]+numbers[j]) >target){
                j-=1;
            }
            else{
                i+=1;
            }
        }
        return ans;
    }
};
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
    */
    
    