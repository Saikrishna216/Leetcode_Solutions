class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<pair<double,int>> maxheap;
        auto calculateIncrement = [](vector<vector<int>>& classes, int idx) {
        double curr_avg = (double)classes[idx][0] / classes[idx][1];
        double new_avg = (double)(classes[idx][0] + 1) / (classes[idx][1] + 1);
        return new_avg - curr_avg;
        };
        for (int i = 0; i < n; ++i) {
            double possible_increment = calculateIncrement(classes, i);
            maxheap.push({possible_increment, i});
        }
        while (extraStudents--) {
            auto [increment, idx] = maxheap.top();
            maxheap.pop();
            classes[idx][0]++;
            classes[idx][1]++;  
            double new_increment = calculateIncrement(classes, idx);
            maxheap.push({new_increment, idx});
        }
        double final_avg = 0.0;
        for (int i = 0; i < n; ++i) {
            final_avg += (double)classes[i][0] / classes[i][1];
        }
        
        return final_avg / n;
    }
};
