class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<int> visited(nums.size(),0);
        long long score=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        for(int i=0;i<nums.size();i++) minheap.push({nums[i],i});
        while(!minheap.empty()){
            auto[val,idx]=minheap.top();
            minheap.pop();
            if(visited[idx]==1)continue;
            score+=val;
            visited[idx]=1; 
            if(idx-1>=0 && visited[idx-1]==0) visited[idx-1]=1;
            if(idx+1<nums.size() && visited[idx+1]==0) visited[idx+1]=1;
            
        }
        return score;
    }
};
