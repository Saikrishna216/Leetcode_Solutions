class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> prefix(n),suffix(n);
        int curr_max=INT_MIN;
        for(int i=0;i<n;i++){
            prefix[i]=max(height[i],curr_max);
            curr_max=prefix[i];
        }
        curr_max=INT_MIN;
        for(int i=n-1;i>=0;i--){
            suffix[i]=max(height[i],curr_max);
            curr_max=suffix[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(height[i]<prefix[i] && height[i]<suffix[i]) ans+=min(prefix[i],suffix[i])-height[i];
        }
        return ans;
    }
};
