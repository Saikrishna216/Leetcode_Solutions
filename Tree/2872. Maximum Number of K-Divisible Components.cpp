#include <vector>
using namespace std;

class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        int count = 0;
        vector<vector<int>> adj_list(n);
        for (auto& edge : edges) {
            adj_list[edge[0]].push_back(edge[1]);
            adj_list[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);
        vector<pair<int, int>> stack;
        vector<long long> subTreeSum(n, 0);

        stack.push_back({0, -1});

        while (!stack.empty()) {
            auto [curr, parent] = stack.back();

            if (visited[curr]) {
                stack.pop_back();
                long long sum = values[curr];
                for (int neighbor : adj_list[curr]) {
                    if (neighbor != parent) {
                        sum += subTreeSum[neighbor];
                    }
                }
                subTreeSum[curr] = sum;
                if (sum % k == 0) count++;
            } else {
                visited[curr] = true;
                for (int neighbor : adj_list[curr]) {
                    if (neighbor != parent) {
                        stack.push_back({neighbor, curr});
                    }
                }
            }
        }

        return count;
    }
};
