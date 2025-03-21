class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        unordered_map<char, int> hashmap;
        for(char& c: s) hashmap[c]++;
        int odd=0;
        for(auto& a: hashmap){
            if(a.second%2 !=0) odd++;
        }
        if(odd>k) return false;
        return true;
    }
};
