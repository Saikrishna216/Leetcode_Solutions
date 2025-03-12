class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
        for(int i=0;i<nums.size();i++) minheap.push({nums[i],i});
        while(k--){
            auto [val,idx]=minheap.top();
            minheap.pop();
            val=val*multiplier;
            minheap.push({val,idx});
        }
        for(int i=0;i<nums.size();i++){
            auto [val,idx]=minheap.top();
            minheap.pop();
            nums[idx]=val;
        }
        return nums;
    }
};
