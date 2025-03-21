class Solution {
public:
bool isUniversal(vector<int>& freq_word,vector<int>& freq_words2){
        for(int i=0;i<26;++i){
            if(freq_word[i]<freq_words2[i])
                return false;
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> max_freq(26,0);
        vector<string> ans;
        for(string& word: words2){
            vector<int> freq(26,0);
            for(char& c: word){
                freq[c-'a']++;
            }
            for(int i=0;i<26;i++){
                max_freq[i]=max(max_freq[i],freq[i]);
            }
        }
        for(string& word:words1){
            vector<int> freq_word(26,0);
            for(char& c :word){
                freq_word[c-'a']++;
            }
            if(isUniversal(freq_word,max_freq)) ans.push_back(word);
        }
        return ans;
    }
};
