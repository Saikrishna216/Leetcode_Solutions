class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=1;
        for(int i:derived){
            n=i^n;
        }
        return n!=0;
    }
};
