class Solution {
public:
    int calc(int n){
        int a;
        int sum=0;
        while(n>0){
            a=n%10;
            sum+=pow(a,2);
            n/=10;
       }
       return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> hash;
        while(true){
            int a=calc(n);
            if(a==1) return true;
            else{
                if(hash[a]==1)return false;
                else hash[a]++;
            }
            n=a;
        }
        return true;
    }
};
