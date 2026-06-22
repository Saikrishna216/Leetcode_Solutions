class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(int& cost:costs){
            coins-=cost;
            if(coins<0) return ans;
            ans+=1;
        }
        return ans;
    }
};
