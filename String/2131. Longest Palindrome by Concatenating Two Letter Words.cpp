class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int freq[26][26];
        memset(freq,0,sizeof(words));
        int ans=0;
        int mid=0;
        for(string w:words){
            int a = w[0]-'a';
            int b= w[1]-'a';
            if(freq[b][a]>0){
                ans+=4;
                freq[b][a]--;
                if(a==b) mid--;
            }
            else{
                freq[a][b]++;
                if(a==b) mid++;                
            }

        }
        return mid>0?ans+2:ans;
    }
};
