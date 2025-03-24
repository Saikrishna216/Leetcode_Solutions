class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n1= nums1.size();
        int n2=nums2.size();
        unordered_map<int,int> hashmap;
        for(int i=0;i<n1;i++) hashmap[nums1[i][0]]=nums1[i][1];
        for(int i=0;i<n2;i++) hashmap[nums2[i][0]]+=nums2[i][1];
        vector<vector<int>> ans;
        for(auto& val:hashmap){
            ans.push_back({val.first, val.second});

        } 
        sort(ans.begin(), ans.end());
       return ans;
    }
};
