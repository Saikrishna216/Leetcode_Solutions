class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int ans=1e9;
        for(int i=0;i<n;i++){
            int c=0;
            if(i+k>n) continue;
            for(int j=i;j<k+i;j++){
                if(blocks[j]=='W') c++;
            }
            cout<<c<<" "<<i<<endl;
            ans=min(ans,c);
        }
        return ans;
    }
};
