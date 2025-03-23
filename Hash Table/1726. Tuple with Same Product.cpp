class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                hashmap[(nums[i]*nums[j])]++;
            }
        }
        int ans=0;
        for(auto& pair:hashmap){
            int freq = pair.second;
            if(freq > 1) {
                ans += 8 * (freq * (freq - 1)) / 2;  
            }
        }
        return ans;
    }
};
