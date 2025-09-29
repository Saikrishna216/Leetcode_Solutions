class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int h=min(height[left],height[right]);
            int w=right-left;
            ans=max(ans,w*h);
            if(h==height[left])left++;
            else right--;
        }
        return ans;
    }
};
