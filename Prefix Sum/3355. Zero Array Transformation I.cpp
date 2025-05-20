class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> deltaarray(nums.size()+1,0);
        for(const auto& query:queries){
            deltaarray[query[0]]+=1;
            deltaarray[query[1]+1]-=1;
        }
        vector<int> operationscount;
        int currentoperations=0;
        for(int d:deltaarray){
            currentoperations+=d;
            operationscount.push_back(currentoperations);
        }
        for(int i=0;i<nums.size();i++){
            if(operationscount[i]<nums[i]) return false;
        }
        return true;
    }
};
