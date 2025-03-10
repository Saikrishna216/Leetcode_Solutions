class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0)return {};
        if(numRows==1)return {{1}};
        vector<vector<int>> prevrows=generate(numRows-1);
        vector<int> rows(numRows,1);
        for(int i=1;i<numRows-1;i++){
            rows[i]=prevrows.back()[i-1]+prevrows.back()[i];
        }
        prevrows.push_back(rows);
        return prevrows;
    }
};
