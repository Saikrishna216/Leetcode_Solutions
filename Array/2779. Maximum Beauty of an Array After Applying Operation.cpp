class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int max_count=0;
        int count=0;
        int left=0;
        int right=0;
        while(right<nums.size()){
            while(right<nums.size() &&(nums[right]-nums[left]<=2*k)){
                right++;
                count++;
            }
            max_count=max(max_count,count);
            if(right==nums.size())break;
            while(left<=right && (nums[right]-nums[left]>2*k)){
                count--;
                left++;
            }
        }
        return max_count;
    }
};
