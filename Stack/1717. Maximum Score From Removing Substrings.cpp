class Solution {
public:
    int check(string& s,string pattern ,int point){
        stack<char> st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(!st.empty()&&pattern[1]==s[i] && st.top()==pattern[0]){
                st.pop();
                ans+=point;
            }
            else{
                st.push(s[i]);
            }
        }
        string new_s="";
        while(!st.empty()){
            new_s.push_back(st.top());
            st.pop();
        }
        reverse(new_s.begin(),new_s.end());
        s=new_s;
        return ans;

    }
    int maximumGain(string s, int x, int y) {
        
        int ans=0;
        if(x>y){
            ans+=check(s,"ab",x);
            ans+=check(s,"ba",y);
        }
        else{
            ans+=check(s,"ba",y);
            ans+=check(s,"ab",x);
        }
        return ans;
    }
};
