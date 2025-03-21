class Solution {
public:
    bool isPrefix(string str1,string str2){
        int m=str1.size();
        int n=str2.size();
        if(m<n)return false;
        for(int i=0;i<n;i++){
                if(str1[i]!=str2[i]) return false;
            }
        return true;
    }
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int k=pref.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(isPrefix(words[i],pref)) ans++;
        }
        return ans;
    }
};
