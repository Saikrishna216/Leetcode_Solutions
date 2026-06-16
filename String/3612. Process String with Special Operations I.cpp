class Solution {
public:
    string processStr(string s) {
        string result ="";
        for(char& a:s){
            if(a=='*'){
                if(result.size()!=0) result.pop_back();
            }
            else if(a=='#'){
                string res=result;
                result= result + res;
            }
            else if(a=='%'){
                reverse(result.begin(), result.end());
            }
            else{
                result.push_back(a);
            }
        }
        return result;
    }
};
