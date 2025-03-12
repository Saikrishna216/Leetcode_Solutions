class Solution {
public:
    int recur(string w1,string w2,int m,int n,vector<vector<int>>& dp){
        if(m<0)return n+1;
        if(n<0)return m+1;

        if(dp[m][n]!=-1)return dp[m][n];
        if(w1[m]==w2[n]) return dp[m][n]=recur(w1,w2,m-1,n-1,dp);
        else{
            return dp[m][n]=1+min(recur(w1,w2,m-1,n-1,dp),min(recur(w1,w2,m-1,n,dp),recur(w1,w2,m,n-1,dp)));
        }

    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return recur(word1,word2,word1.size()-1,word2.size()-1,dp);
    }
};
