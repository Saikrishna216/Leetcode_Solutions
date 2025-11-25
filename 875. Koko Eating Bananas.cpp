#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
private:
    // returns how many hours it takes at speed k
    long long hours(int k, const vector<int>& piles) {
        long long total = 0;
        for (int n : piles) {
            // integer ceil: (n + k - 1) / k
            total += ( (long long)n + k - 1 ) / k;
        }
        return total;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int n : piles) high = max(high, n);

        int ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (hours(mid, piles) <= h) {
                ans = min(ans, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        // fallback: if ans never updated (shouldn't happen for valid inputs), return low
        return (ans == INT_MAX) ? low : ans;
    }
};
