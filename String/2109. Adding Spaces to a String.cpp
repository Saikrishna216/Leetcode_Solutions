class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int j=0;
        string a;
        for(int i=0;i<s.size();i++){
            if(j<spaces.size() && spaces[j]==i){
                a+=' ';
                a+=s[i];
                j+=1;
            }
            else{
                a+=s[i];
            }

        }
        return a;
    }
};
