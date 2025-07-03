class Solution {
public:
    char kthCharacter(int k) {
        string str="a";
        while(str.size()<k){
            int n=str.size();
            for(int i=0;i<n;i++){
                char temp ='a'+(str[i]-'a'+1)%26;
                str+=temp;
            }
        }
        return str[k-1];
    }
    
};
