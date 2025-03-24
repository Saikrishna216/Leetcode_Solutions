class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> less;
        vector<int> eq;
        vector<int> great;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]==pivot) eq.push_back(nums[i]);
            else if(nums[i]<pivot) less.push_back(nums[i]);
            else great.push_back(nums[i]);
        }
        for(int num:less) ans.push_back(num);
        for(int num:eq) ans.push_back(num);
        for(int num:great) ans.push_back(num);
        return ans;
    }
};
