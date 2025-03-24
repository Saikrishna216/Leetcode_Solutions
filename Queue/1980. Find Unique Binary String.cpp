class Solution {
public:
    bool ispresent(vector<string> nums,string target){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return true;
        }
        return false;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums[0].size();
        queue<string> q;
        q.push("0");
        q.push("1");
        while(!q.empty()){
            string curr=q.front();
            q.pop();
            if(curr.size()==n){
                if(!ispresent(nums,curr)) return curr;
                continue;
            }
            string first=curr;
            string second =curr;
            first.push_back('0');
            second.push_back('1');
            q.push(first);
            q.push(second);
        }
        return "";
    }
};
