class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        int sum=0;
        int right_ones=0;
        int left_ones=0;
        int prefix=0;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                sum+=i;
                right_ones++;
            }
        }
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            int s=prefix+sum;
            result[i]=s;
            if(boxes[i]=='1'){
                left_ones++;
                right_ones--;
            }
            prefix+=left_ones;
            sum-=right_ones;
        }
        return result;
    }
};
