class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int answer=0;
        vector<vector<int>> line_sweep;
        for(auto& event:events){
            int start=event[0];
            int end=event[1];
            int val=event[2];
            line_sweep.push_back({start,1,val});
            line_sweep.push_back({end+1,-1,val});
        }
        int sum=0;
        int seen=0;
        sort(line_sweep.begin(),line_sweep.end());
        for(auto& event:line_sweep){
            int start=event[0];
            int end=event[1];
            int val=event[2];
            if(end==1){
                sum=max(sum,seen+val);
            }
            else{
                seen=max(seen,val);
            }
        }
        return sum;
    }
};
