class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> prefix(s.size()+1,0);
        for(auto shift:shifts){
            if(shift[2]==0){
                prefix[shift[0]] -=1;
                prefix[shift[1]+1] +=1;
            }
            else{
                prefix[shift[0]] +=1;
                prefix[shift[1]+1] -=1;
                
            }
        }
        for (int i = 1; i < s.size(); i++) {
            prefix[i] += prefix[i - 1];
        }
        string result = s;
        for (int i = 0; i < s.size(); i++) {
            int shift = prefix[i] % 26;
            if (shift < 0) shift += 26; 
            result[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }
        
        return result;
    }
};
