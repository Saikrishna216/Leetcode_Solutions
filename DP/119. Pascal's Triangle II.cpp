class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prevRow;
        
        for (int i = 0; i < rowIndex+1; i++) {
            vector<int> currentRow(i + 1, 1);
            
            for (int j = 1; j < i; j++) {
                currentRow[j] = prevRow[j - 1] + prevRow[j];
            }
            prevRow = currentRow;
        }
        
        return prevRow;
    }
};
