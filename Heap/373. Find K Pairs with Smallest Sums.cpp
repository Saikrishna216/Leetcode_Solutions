class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> minheap;
        int j=0;
        for(int i=0;i<nums1.size();i++){
            minheap.push({nums1[i]+nums2[j],i,0});
        }
        while(k!=0 && !minheap.empty()){
            auto top = minheap.top();
            minheap.pop();
            ans.push_back({nums1[top[1]],nums2[top[2]]});
            if(top[2]+1<nums2.size()){
            minheap.push({nums1[top[1]]+nums2[top[2]+1],top[1],top[2]+1});
            }
            k-=1;
        }
    
        return ans;

    }
};
