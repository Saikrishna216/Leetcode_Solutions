class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int even_count=1;
        int odd_count=0;
        int res=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum&1) {
                odd_count++;
                res=(res+(even_count))%(1000000007);
            }
            else{
                even_count+=1;
                res=(res+(odd_count))%(1000000007);
            }
        }
        return res;
    }
};
