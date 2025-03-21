class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> hashmap;
        for(char& c:s) hashmap[c]++;
        int res=0;
        for(auto& a:hashmap){
            if(a.second&1) res++;
            else res+=2;
        }
        return res;
    }
};
