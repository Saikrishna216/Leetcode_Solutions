class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int> values(arr.begin(),arr.end());
        int longest=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int a=arr[i];
                int b=arr[j];
                int lenght=2;
                int sum=a+b;
                while(values.count(sum)>0){
                        lenght++;
                        a=b;
                        b=sum;
                        sum=a+b;
                }
                if(lenght>2)longest=max(longest,lenght);
            }
        }
        return longest;
    }
};
