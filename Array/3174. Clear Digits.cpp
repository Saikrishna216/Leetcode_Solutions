class Solution {
public:
    string clearDigits(string s) {
        int n = s.size();
        vector<int> idx(n,0);
        int j;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z') j=i;
            else{
                idx[i]=1;
                idx[j]=1;
                while(j>=0&&idx[j]==1)j--;
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(idx[i]==0) ans.push_back(s[i]);
        }
        return ans;
    }
};
