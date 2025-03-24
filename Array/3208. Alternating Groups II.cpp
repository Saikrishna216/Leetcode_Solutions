class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();
        int count=0;
        int limit = n+k-1;
        int left=0;
        int right;
        while(left<n){
            right=left+1;
            while(right<limit and colors[(right-1)%n]!=colors[right%n]) right++;
            if(right-left>=k) count+= (right-left)-k+1;
            left=right; 
        }
        return count;
    }
};
