#include <vector>
#include <algorithm>

class Solution {
public:
    int maxChunksToSorted(std::vector<int>& arr) {
        int n = arr.size();
        int maxLeft = 0;
        int chunks = 0;

        for (int i = 0; i < n; ++i) {
            maxLeft = max(maxLeft, arr[i]);
            if (maxLeft == i) {
                ++chunks;
            }
        }
        
        return chunks;
    }
};
