class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq(nums.begin(),nums.end());
        int count=0;
        while(!pq.empty()){
            if(pq.top()>=k) return count;
            long long int x=pq.top();
            pq.pop();
            long long int y =pq.top();
            pq.pop();
            long long int val=min(x,y)*2+max(x,y);
            count++;
            pq.push(val);
        }
        return count;
    }
};
