class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.size()%2!=0) return false;
        int opening=0,closing= 0;
        int wildcard =0;
        for(int i=0;i<s.size();++i){
            if(locked[i]=='0') wildcard++;
            else if(s[i]=='(') opening++;
            else closing++;
            
            if(wildcard<(closing-opening)) return false;
        }
        
        opening=closing=wildcard=0;
        for(int i=s.size()-1;i>=0;i--){
            if(locked[i]=='0') wildcard++;
            else if(s[i]=='(') opening++;
            else closing++;
            
            if(wildcard<(opening-closing)) return false;
        }
        return true;
    }
};
