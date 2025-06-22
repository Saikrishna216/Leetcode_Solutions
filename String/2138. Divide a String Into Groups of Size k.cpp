class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        int no_of_groups= ceil(static_cast<float>(n)/k);
        vector<string> ans;
        int i=0;
        for(int a=0;a<no_of_groups;a++){
            string temp="";
            for(int b=0;b<k;b++){
                if(i>=n) temp=temp+fill;
                else temp=temp+s[i];
                i++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
