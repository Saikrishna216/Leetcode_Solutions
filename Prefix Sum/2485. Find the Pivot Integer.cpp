
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : NIL
    */

    
    class Solution:
    def pivotInteger(self, n: int) -> int:
        # Compute cumulative sum from 1 to n
        cumulative_sum = 0
        sum1 = [cumulative_sum := cumulative_sum + i for i in range(1, n + 1)]
        
        # Compute cumulative sum from n to 1
        cumulative_sum = 0
        sum2 = [cumulative_sum := cumulative_sum + i for i in range(n, 0, -1)]
        
        # Compare sums at corresponding indices to find pivot
        for i in range(n):
            if sum1[i] == sum2[n - i - 1]:
                return i + 1
        # If no pivot found, return -1
        return -1
    
    
    /*
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/find-the-pivot-integer/submissions/1202871416/
    */
    
    