class Solution {
public:
    double recur(double x,int n){
        if(n==0) return 1;
        double res=pow(recur(x,n/2),2);
        return n%2?x*res:res;
    }
    double myPow(double x, int n) {
        return n>0?recur(x,n):1/recur(x,n);
    }
};
