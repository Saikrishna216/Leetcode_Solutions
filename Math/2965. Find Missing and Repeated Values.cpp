class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeat = -1, missing = -1;

        // Step 1: Identify the repeated number using in-place marking
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = abs(grid[i][j]);  // Get absolute value
                int row = (val - 1) / n;
                int col = (val - 1) % n;
                
                if (grid[row][col] < 0) {
                    repeat = val;  // Found the duplicate
                } else {
                    grid[row][col] *= -1;  // Mark visited
                }
            }
        }

        // Step 2: Identify the missing number (positive value in grid)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    missing = i * n + (j + 1);
                    break;  // No need to continue once missing number is found
                }
            }
        }

        return {repeat, missing};
    }
};
