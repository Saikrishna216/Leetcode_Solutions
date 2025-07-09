class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());  
        int n = events.size();
        priority_queue<int, vector<int>, greater<int>> minheap;
        int time = 1, ans = 0, i = 0;
        while (i < n || !minheap.empty()) {
            if (minheap.empty()) 
                time = max(time, events[i][0]);
            while (i < n && events[i][0] == time) {
                minheap.push(events[i][1]);
                i++;
            }
            while (!minheap.empty() && minheap.top() < time) 
                minheap.pop();
            if (!minheap.empty()) {
                minheap.pop(); // attend event
                ans++;
            }
            time++;
        }
        return ans;
    }
};
