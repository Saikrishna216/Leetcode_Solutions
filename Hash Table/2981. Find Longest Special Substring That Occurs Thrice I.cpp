class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int> counter;
        vector<string> substrings;
        for(int i=0;i<s.size();i++){
            int index=i;
            while(index<s.size() && s[index]==s[i]){
                substrings.push_back(s.substr(i,index-i+1));
                index++;
            }
        }

        for(auto& sub:substrings){
            counter[sub]++;
        }
        int ans=-1;
        int max_len=0;
        for(auto& val:counter){
            if(val.first.size() > max_len && val.second>=3){
                max_len=val.first.size();
                ans=val.second;
            }
    }
    return max_len==0?-1:max_len;

    }
};
