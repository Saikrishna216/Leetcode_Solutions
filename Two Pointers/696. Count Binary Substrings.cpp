class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> groups;
        char prev=s[0];
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                groups.push_back(count);
                count=1;
            }
            else{
                count++;
            }
        }
        groups.push_back(count);
        int ans=0;
        for(int i=0;i<groups.size()-1;i++){
            ans+=min(groups[i],groups[i+1]);
        }
        return ans;
    }
};
