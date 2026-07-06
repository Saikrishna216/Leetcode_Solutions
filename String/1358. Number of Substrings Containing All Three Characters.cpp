class Solution {
public:
    bool hasall(vector <int>& freq){
        return freq[0]>0 && freq[1]>0 && freq[2]>0;
    }
    int numberOfSubstrings(string s) {
        int n =s.size();
        int l=0;
        int r=0;
        vector<int> freq(3,0);
        int ans=0;
        while(r<n){
            freq[s[r]-'a']++;
            while(hasall(freq)){
                ans+=(n-r);
                freq[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return ans;
    }
};
