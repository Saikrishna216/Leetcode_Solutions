class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        vector<char> val(26);
        for(int i=25;i>=0;i--) val[i]='a'+abs(25-i);
        for(string& word:words){
            int sum=0;
            for(int i=0;i<word.size();i++){
                sum+=weights[word[i]-'a'];
            }
            sum=sum%26;
            ans+=val[sum];
        }
        return ans;
    }
};
