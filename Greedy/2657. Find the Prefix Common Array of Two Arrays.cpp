class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> C;
        vector<int> frequency(n+1,0);
        for(int i=0;i<n;i++){
            int counter=0;
            frequency[A[i]]++;
            frequency[B[i]]++;
            for(int z:frequency){
                if(z==2) counter++;
            }
            C.push_back(counter);
        }
        return C;
    }
};
