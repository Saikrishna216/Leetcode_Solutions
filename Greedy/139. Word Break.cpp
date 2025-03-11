class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> valid(s.size()+1,false);
        valid[0]=true;
        for(int i=1;i<s.size()+1;i++){
            for(const string& w:wordDict){
                int start=i-w.length();
                if(start>=0 && valid[start] && s.substr(start,w.length())==w){
                    valid[i]=true;
                    break;
                }
            }
        }
        return valid[s.size()];

    }
};
