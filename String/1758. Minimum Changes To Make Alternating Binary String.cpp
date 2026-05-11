class Solution {
public:
    int minOperations(string s) {
        int changes=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]==1) changes+=1;
            }
            else{
                if(s[i]==0) changes+=1; 
            }
        }
        return min(changes,n-changes);
    }
};
