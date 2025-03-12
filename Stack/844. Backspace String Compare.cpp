class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> t1;
        string s2,t2="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#') s1.push(s[i]);
            else if(!s1.empty()) s1.pop();
        }
        while(!s1.empty()){
            s2+=s1.top();
            s1.pop();
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#') t1.push(t[i]);
            else if(!t1.empty())  t1.pop();
        }
        while(!t1.empty()){
            t2+=t1.top();
            t1.pop();
        }
        return s2==t2;
    }
};
