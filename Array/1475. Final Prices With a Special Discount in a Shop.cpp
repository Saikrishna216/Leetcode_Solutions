class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answers;
        for(int i=0;i<prices.size();i++){
            int c=0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j] <= prices[i]){
                    answers.push_back(prices[i]-prices[j]);
                    c=1;
                    break;
                }
            }
            if(c==0) answers.push_back(prices[i]);
        }
        return answers;
    }
};
